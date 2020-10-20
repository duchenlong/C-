class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int cnt[26];
        memset(cnt, -1,sizeof cnt);

        int n = s.size();
        int ans = -1;
        for(int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            if(cnt[idx] == -1) cnt[idx] = i;
            else {
                ans = max(ans, i - cnt[idx] - 1);
            }
        }

        return ans;
    }
};

给你一个字符串 s，请你返回 两个相同字符之间的最长子字符串的长度 ，计算长度时不含这两个字符。如果不存在这样的子字符串，返回 -1 。

子字符串 是字符串中的一个连续字符序列。

?

示例 1：

输入：s = "aa"
输出：0
解释：最优的子字符串是两个 'a' 之间的空子字符串。
示例 2：

输入：s = "abca"
输出：2
解释：最优的子字符串是 "bc" 。
示例 3：

输入：s = "cbzxy"
输出：-1
解释：s 中不存在出现出现两次的字符，所以返回 -1 。
示例 4：

输入：s = "cabbac"
输出：4
解释：最优的子字符串是 "abba" ，其他的非最优解包括 "bb" 和 "" 。
?

提示：

1 <= s.length <= 300
s 只含小写英文字母

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/largest-substring-between-two-equal-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
