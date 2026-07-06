class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda x : (x[0], -x[1]))
        lst = []
        for ele in intervals:
            if len(lst) == 0:
                lst.append(ele)
            else :
                a = lst[-1][0]
                b = lst[-1][1]
                c = ele[0]
                d = ele[1]
                if c >= a and d <= b:
                    continue
                else :
                    lst.append(ele)

        return len(lst)