class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        dict = {}
        for ch in text:
            if ch in {'b','a','l','o','n'}:
                dict[ch] = dict.get(ch, 0) + 1
        if len(dict) == 5:
            if dict['b'] == dict['a'] and dict['b'] == dict['n']:
                if dict['l'] >= 2*dict['b'] and dict['o'] >= 2*dict['b']:
                    return dict['b']
            else:
                mn = min(dict['b'], min(dict['a'], dict['n']))
                if dict['l'] >= 2*mn and dict['o'] >= 2*mn:
                    return mn
                else:
                    while mn > 0:
                        mn -= 1
                        if dict['l'] >= 2*mn and dict['o'] >= 2*mn:
                            return mn
        return 0
