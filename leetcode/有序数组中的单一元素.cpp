class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ri = nums.size() - 1, le = 0;
        while(le < ri) {
            int mid = (le + ri) / 2;
            int cnt = mid - le;

            if(nums[mid - 1] == nums[mid]) {
                if(cnt - 1 & 1)  ri = mid - 2;
                else le = mid + 1;
            } else if(nums[mid + 1] == nums[mid]) {
                if(cnt & 1) ri = mid - 1;
                else le = mid + 2;
            } else {
                return nums[mid];
            }
        }

        return nums[le];
    }
};


给定一个只包含整数的有序数组，每个元素都会出现两次，唯有一个数只会出现一次，找出这个数。

示例 1:

输入: [1,1,2,3,3,4,4,8,8]
输出: 2
示例 2:

输入: [3,3,7,7,10,11,11]
输出: 10
注意: 您的方案应该在 O(log n)时间复杂度和 O(1)空间复杂度中运行。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/single-element-in-a-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
