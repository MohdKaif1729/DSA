#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numSubnumsayProductLessThanK(vector<int>& nums, int k) {
    int n = nums.size(), start = 0, end = 0, product = 1, count = 0;

    while(end < n && start < n) {
        product *= nums[end];

        if(product > k) {
            while(product >= k && start <= end) {
                product /= nums[start];
                start++;
            }

        }   
        int sum = end - start + 1; 
        count += sum;
        end++;


    } 



    return count;
}

int main() {
    vector<int> nums{10,9,10,4,3,8,3,3,6,2,10,10,9,3};
    
     
    int n = numSubnumsayProductLessThanK(nums, 19); 
    cout << n;
    return 0;
}
