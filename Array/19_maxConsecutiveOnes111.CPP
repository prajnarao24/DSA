//leet 1004
#include<iostream>
#include<vector>
using namespace std;

int Longest(vector<int>nums,int k){
    int left=0;
    int zerocount=0;
    int ans=0;
              
                                                           /*When we see 0 → count it!
                                                         When we see 1 → just include in window
                                                         no counting needed!            */
    for(int right=0;right<nums.size();right++){  
        if(nums[right]==0){
            zerocount++;
        }

        /*If zeros exceed k → invalid window!
Keep removing from left until valid!
If left element is 0 → decrease count
Move left pointer forward!
*/

        while(zerocount>k){
            if(nums[left]==0){
                zerocount--;
            }
            left++;
        }
        ans=max(ans,right-left+1);
        /*
        arr = {1, 1, 1, 0, 0}
       0  1  2  3  4
left=0, right=2
right - left = 2 - 0 = 2 
But window has 3 elements! {1,1,1}
That's why +1!
right - left + 1 = 2 - 0 + 1 = 3 

Ruler:
1  2  3  4  5
↑           ↑
start=1    end=5

How many numbers?
end - start + 1
= 5 - 1 + 1
= 5 ✅

Without +1:
5 - 1 = 4 ❌ wrong!

*/
    }
    return ans;
}

int main(){
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<Longest(nums,k);
    return 0;
}


/*
arr = {1,1,1,0,0,0,1,1,1,1,0}  k=2
r=0: arr[0]=1, zeros=0, window={1}
     ans=max(0,0-0+1)=1

r=1: arr[1]=1, zeros=0, window={1,1}
     ans=max(1,1-0+1)=2

r=2: arr[2]=1, zeros=0, window={1,1,1}
     ans=max(2,2-0+1)=3

r=3: arr[3]=0, zeros=1, window={1,1,1,0}
     zeros=1 ≤ k=2 → valid!
     ans=max(3,3-0+1)=4

r=4: arr[4]=0, zeros=2, window={1,1,1,0,0}
     zeros=2 ≤ k=2 → valid!
     ans=max(4,4-0+1)=5

r=5: arr[5]=0, zeros=3
     zeros=3 > k=2 → INVALID! shrink!
     
     Shrink:
     left=0, arr[0]=1 → not zero
     left++ → left=1, zeros=3 still!
     
     left=1, arr[1]=1 → not zero
     left++ → left=2, zeros=3 still!
     
     left=2, arr[2]=1 → not zero
     left++ → left=3, zeros=3 still!
     
     left=3, arr[3]=0 → zero!
     zerocount-- → zeros=2
     left++ → left=4
     
     zeros=2 ≤ k=2 → valid! ✅
     window={0,0,0} (index 3,4,5)
     wait left=4 so window={0,0}
     ans=max(5,5-4+1)=max(5,2)=5

r=6: arr[6]=1, zeros=2
     zeros=2 ≤ k=2 → valid!
     window={0,0,1} (index 4,5,6)
     ans=max(5,6-4+1)=max(5,3)=5

r=7: arr[7]=1, zeros=2
     window={0,0,1,1} (index 4,5,6,7)
     ans=max(5,7-4+1)=max(5,4)=5

r=8: arr[8]=1, zeros=2
     window={0,0,1,1,1}
     ans=max(5,8-4+1)=max(5,5)=5

r=9: arr[9]=1, zeros=2
     window={0,0,1,1,1,1}
     ans=max(5,9-4+1)=max(5,6)=6

r=10: arr[10]=0, zeros=3
      zeros=3 > k=2 → INVALID! shrink!
      
      left=4, arr[4]=0 → zero!
      zerocount-- → zeros=2
      left++ → left=5
      
      zeros=2 ≤ k=2 → valid! ✅
      window={0,1,1,1,1,0} (index 5-10)
      ans=max(6,10-5+1)=max(6,6)=6

Final Answer = 6 ✅*/