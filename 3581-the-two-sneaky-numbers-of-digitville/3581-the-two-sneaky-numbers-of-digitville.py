class Solution(object):
    def getSneakyNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res=[]
        c=0
        for i in nums:
            c=0
            for j in nums:
                if i==j:
                    c+=1
            if c==2 and i not in res:
                res.append(i)
        return res
                

        