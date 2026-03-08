# # m = 0
# # l = 0
# # h = n-1
# # while (m<= h){
# # if(a[m]==0)
# #      swap(a[l],a[m])
# #      l++;
# #      m++;
# # if(a[m]== 1)
# #  m++
# # if(a[m]==2)
# # swap(a[m],a[h])
# # h--;}      
# class Solution {
# public:
#     void sortColors(vector<int>& nums) {
#         int l = 0;
#         int m = 0;
#         int h = nums.size() -1;
#         while (m<=h){
#             if(nums[m] == 0){
                
#                     swap(nums[l],nums[m]);
#                     l++;
#                     m++;
#                 }
#                 else if(nums[m]== 1){
#                     m++;
#                 }
#                 else{
#                     swap(nums[m],nums[h]);
#                     h--;
#                 }

                
#             }
#         }
      
    
# };