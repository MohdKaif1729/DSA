#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void display(vector<int>& height) {
    int n = height.size();
    for(int i = 0; i < n; i++) {
        cout << height[i] << " ";
    }

    cout << endl;

    return;
}

// TC: O(n)
// SC: O(n)
// int trapingRainWater(vector<int>& height) {
//     int n = height.size();
//     vector<int> leftMax(n);
//     leftMax[0] = 0;

//     for(int i = 1; i < n; i++) {
//         leftMax[i] = max(leftMax[i - 1], height[i - 1]);
//     }

//     vector<int> rightMax(n);
//     rightMax[n - 1] = 0;
//     for(int i = n - 2; i >= 0; i--) {
//         rightMax[i] = max(rightMax[i + 1], height[i + 1]);
//     }

//     int water = 0;

//     for(int i = 0; i < n; i++) {
//         int minheight = min(leftMax[i], rightMax[i]);

//         if(minheight - height[i] >= 0) {
//             water += minheight - height[i];
//         }
//     }

//     return water;

// }


// TC: O(n)
// SC: O(1)
int trapingRainWater(vector<int>& height) {
    int n = height.size();
    int water = 0;
    int index = 0;
    int maxHeight = INT_MIN;
    for(int i = 0; i < n; i++) {
        // maxHeight = max(maxHeight, height[i]);
        if(maxHeight < height[i]) {
            maxHeight = height[i];
            index = i;
        }
    }

    // left part
    int leftPart = 0;
    for(int i = 0; i < index; i++) {
        if(leftPart > height[i]) {
            water += leftPart - height[i];
        }
        else {
            leftPart = height[i];
        }
    }
    
    // right part
    int rightPart = 0;
    for(int i = n - 1; i > index; i--) {
        if(rightPart > height[i]) {
            water += rightPart - height[i];
        }
        else {
            rightPart = height[i];
        }
    }
    

    return water;

}

int main() {
    vector<int> height{4, 2, 0, 5, 2, 6, 2, 3};
    int ans = trapingRainWater(height);

    cout << ans << endl;
    return 0;
}