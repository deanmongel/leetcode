class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        test case:
        "abcabcbb"->"abc"
        "bbbbb"->"b"
        "pwwkew"->"wke"
        """
        char_dict={}
        max = 0
        if len(s) <= 0:
            return 0
        start = 0
        for index, char in enumerate(s):
            old_char_index = char_dict.get(char)
            if old_char_index != None:
                # start can not pull back
                start = old_char_index+1 if old_char_index+1 > start else start
                char_dict[char] = index
                max = max if max > index - start + 1 else index - start + 1
            else:
                char_dict[char] = index
                max = max if max > index - start +1 else index - start +1

        return max

