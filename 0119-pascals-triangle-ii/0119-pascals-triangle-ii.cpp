class Solution {
public:
long long nCr(int n, int r) {
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
    vector<int> getRow(int rowIndex) {
        vector<int> x ;
        for(int j = 0 ; j<=rowIndex ; j++){
            x.push_back(nCr(rowIndex,j));
        }
        return x ;
    }
};