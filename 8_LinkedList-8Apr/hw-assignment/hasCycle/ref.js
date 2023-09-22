var hasCycle = function (h) {
    // no elements
    if (!h) return false;
  
    // 1 or more elements exist
    let slow = h;
    let fast = h;
    while (fast?.next?.next) {
      slow = slow.next;
      fast = fast.next.next;
      if (slow === fast) {
        return true;
      }
    }
  
    return false;
  };
  