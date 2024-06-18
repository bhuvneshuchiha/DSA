def majorityElement(nums):
    """
    :type nums: List[int]
    :rtype: List[int]
    """
    import pdb

    pdb.set_trace()
    dct = {}
    for item in nums:
        if item in dct.keys():
            dct[item] += 1
        else:
            dct[item] = 1

    lst = []
    for key, value in dct.items():
        if value > len(nums) / 3:
            lst.append(key)

    return lst


nums = [3, 2, 3]
majorityElement(nums)
