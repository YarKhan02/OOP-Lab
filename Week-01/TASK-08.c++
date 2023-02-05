#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    // int height[6] = {4, 2, 0, 3, 2, 5} 
    int height[12] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int l = 0;
    int r = (sizeof(height) / sizeof(int)) - 1;
    int leftMax = height[l], rightMax = height[r];
    int output = 0;

    while (l < r){
        if (leftMax < rightMax){
            l++;
            leftMax = max(leftMax, height[l]);
            output += leftMax - height[l];
        }
        else{
            r--;
            rightMax = max(rightMax, height[r]);
            output += rightMax - height[r];
        }
    }
    cout << output;
}