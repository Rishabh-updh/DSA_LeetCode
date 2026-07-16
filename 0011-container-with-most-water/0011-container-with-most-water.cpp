class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN , area = 0 ;
        for(int i = 0, j = height.size()-1 ; i < j ; ){
            int mini = min(height[i],height[j]);
            area = mini*(i-j);
            if(area<0) area = area*-1 ;
            if(area>max) 
                max = area ; 
            if(height[i]<height[j]) i++ ;
            else j-- ;
        }
        return max ;
    }
};