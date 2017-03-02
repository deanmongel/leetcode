class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        test case:
        nums = [2, 7, 11, 15], target = 9
        nums = [2, 7, 2, 15], target = 4
        nums = [2, 7, 11, 15], target = 4
        """
        rdict = {}
       	for index, number in enumerate(nums):
       		target_index = rdict.get(str(number))
       		if target_index != None:
       			return [target_index, index]
       		else:
       			rdict[str(target-number)] = index