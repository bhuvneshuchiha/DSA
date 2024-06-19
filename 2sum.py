def twoSum(nums, target):
    dct = {}
    for i in range(len(nums)):
        diff = target - nums[i]
        if diff in dct:
            return [dct[diff], i]
        dct[nums[i]] = i
    return -1  # If no solution is found
