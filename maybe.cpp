#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int target;
    int num1, num2;
    vector<int> nums[];

    Solution() : target(0) {}
};
int main()
{
    Solution s;
    int n;
    cout<<"what is the target?";
    cin>>s.target;
    cout<<"number of intergers?";
    cin>> n;
    s.nums.resize(n); //resize the vector to hold 'n' vectors
    for(int i = 0 ; i<n ; i++){
        int c = i+1;
        std::cout<<"Enter the "<<c<<" integers:";
        std::cin>>s.nums[i];
    }
    
}
