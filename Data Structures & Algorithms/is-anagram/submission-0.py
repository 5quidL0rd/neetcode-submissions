class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) != len(t):

            return False

        s_list = list(s)

        t_list = list(t)


        if (sorted(s_list) == sorted(t_list)):

            return True

        else:
            return False

