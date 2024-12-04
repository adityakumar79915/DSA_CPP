#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>> four_sum(vector<int> &nums, int target){
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1; j<n; j++){
            int p = j+1;
            int q = n-1;
            while(p<q){
                long long sum = (long long)nums[i] + (long long)nums[j]+(long long) nums[p]+(long long) nums[q];
                if(sum<target){
                    p++;
                }
                else if(sum>target){
                    q--;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;
                    while(p<q && nums[p]==nums[p-1]){
                        p++;
                    }
                }

            }
            j++;
            while(j<n && nums[j]==nums[j-1]){
                j++;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> res = four_sum(nums, target);
    if(!res.empty()){
        cout<<res<<endl;
    }
    else{
        cout<<"sum not found"<<endl;
    }
    return 0;
}