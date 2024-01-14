#include <iostream>
using namespace std;

class Solution
{
    
  private:
  
    bool isValid(int*arr, int n, int k, int max) {
        int painters = 1;
        int walls = 0;
        for(int i = 0; i < n; i++) {
            
            walls += arr[i];
            if(walls > max) {
                painters++;
                walls = arr[i];
                
            }
            
            if(painters > k) {
                return false;
            }
        }
        
        return true;
    }
    
  public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        if(n < k) {
            return -1;
        }
        int start = 0;
        int end = 0;
        int ans = -1;
        
        for(int i = 0; i < n; i++) {
            start = max(start, arr[i]);
            
            end += arr[i];
        }
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(isValid(arr, n, k, mid) == true) {
                ans = mid;
                end = mid - 1;
                
                    
            }
            
            else {
                start = mid + 1;
            }
            
            
        }
        
        return ans;
        
        
    }
};

int main() {
    // int a = 34;
    // int b = 7;

    // int ans = 0;
    // int mx = max(a, b);
    // while(mx != 0) {
    //     if(a % 2 != b % 2) {
    //         ans++;
    //     }
    //     a /= 2;
    //     b /= 2;
    //     mx /= 2;
        
    // }
    // while(x != 0) {
    //     if(x % 2 == 1) {
    //         ans++;
    //     }
    //     x /= 2;
        
    // }
    // int A = 8, B = 5, C = 2;
    // int a = C;
    // while(A != 0) {
        
    //     if(C == B) {
    //         C = 1;
            
    //     }
    //     else {
    //         C++;
    //     }
    //     A--;
        
    // }

    // cout << C - 1 << endl;

    Solution ans;
    int arr[] = {5,10,30,20,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << ans.minTime(arr, n, k);
    return 0;
}