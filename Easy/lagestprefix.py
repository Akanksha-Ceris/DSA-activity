class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ""
        res = ""
        for i in range(len(min(strs, key=len))):
            if any(s[i] != strs[0][i] for s in strs):
                return res
            res += strs[0][i]
        return res