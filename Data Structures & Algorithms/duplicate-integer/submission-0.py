class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        
        res = []

        n = len(nums)

        for i in range(n):

            if nums[i] in res:

                return True
            
            else:

                res.append(nums[i])
                continue

        return False