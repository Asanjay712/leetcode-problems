class Solution {
public:

/*void swap(a,b){
    int temp=a;
    a=b;
    b=temp;
}*/
    void sortColors(vector<int>& nums) {
        int low=0;
    int mid=0;
    int high=nums.size()-1;
    while(mid<=high){
      if(nums[mid]==2){//start to check unknown values which is mid
  //swap
       swap(nums[mid],nums[high]);
        high--;
      }
     else if(nums[mid]==1){
        mid++;
      }
      else {
        swap(nums[low],nums[mid]);
         
        low++;
        mid++;

      }
    }
        
    }
};