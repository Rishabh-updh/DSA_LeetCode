class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans ;
        ans.push_back(celsius + 273.15000) ;
        ans.push_back(celsius * 1.80000 + 32.00000) ;
        return ans ;
    }
};