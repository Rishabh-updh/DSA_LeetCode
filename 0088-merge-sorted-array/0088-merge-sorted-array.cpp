class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp ;
        int* p1 = nums1.data() , *p2 = nums2.data() ;
        int* e1 = p1 + m , *e2 = p2 + n ;
        while(p1<e1 && p2<e2){
            if(*p1<=*p2){
                temp.push_back(*p1);
                p1++;
            }
            else{
                temp.push_back(*p2);
                p2++;
            }
        }
        while(p1<e1){
            temp.push_back(*p1);
            p1++;
        }
        while(p2<e2){
            temp.push_back(*p2);
            p2++;
        }
        nums1.swap(temp);
    }
};