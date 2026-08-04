class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        minimum = min(nums)
        maximum = max(nums)
        s1 = set(nums)
        s2 = set(range(minimum, maximum+1))
        s3 = s2 ^ s1
        ans = list(s3)
        ans.sort()
        return ans 
