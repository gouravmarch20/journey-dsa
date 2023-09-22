var AuthenticationManager = function (timeToLive) {
    const expiry = {}
    this.generate = function (id, ct) {
      expiry[id] = ct + timeToLive
    }
    this.renew = function (id, ct) {
      for (const id in expiry) if (expiry[id] <= ct) delete expiry[id]
      if (expiry[id]) expiry[id] = ct + timeToLive
    }
    this.countUnexpiredTokens = function (ct) {
      for (const id in expiry) if (expiry[id] <= ct) delete expiry[id]
      return Object.keys(expiry).length
    }
  }
  