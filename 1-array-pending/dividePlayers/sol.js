/**
 * @param {number[]} skill
 * @return {number}
 */
var dividePlayers = function(skill) {
    const skillPerTeam = skill.reduce((a,c) => a+c,0) / ( skill.length / 2)
    skill.sort((a,b) => a-b)

    let left = 0
    let right = skill.length - 1
    let chemistry = 0
    while(left < right) {
        if (skill[left] + skill[right] !== skillPerTeam) return -1
        chemistry += skill[left] * skill[right]
        left++
        right--
    }
    return chemistry
};