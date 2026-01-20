class Solution(object):
    def minBitwiseArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        lst=[]
        for i in nums:
            q=False
            for j in range(1,i):
                if (j | j+1) ==i:
                    lst.append(j)
                    q=True
                    break
            if not q:
                lst.append(-1)
        return lst
        