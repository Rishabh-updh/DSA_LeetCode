class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int* ptr1 = nums1.data();
        int* end1 = ptr1 + nums1.size();
        int* ptr2 = nums2.data();
        int* end2 = ptr2 + nums2.size();
        vector<int> temp ;
        while(ptr1 < end1 && ptr2 < end2){
            if(*ptr1<=*ptr2){
                temp.push_back(*ptr1);
                ptr1++;
            }
            else{
                temp.push_back(*ptr2);
                ptr2++;
            }
        }
        while(ptr1 < end1){
            temp.push_back(*ptr1);
            ptr1++;
        }
        while(ptr2 < end2){
            temp.push_back(*ptr2);
            ptr2++;
        }
        int n = temp.size() ;
        if(n%2==0){
            return (double)(temp[(n-1)/2] + temp[n/2])/2 ;
        }
        else 
            return(double)(temp[n/2]) ;
    }
};