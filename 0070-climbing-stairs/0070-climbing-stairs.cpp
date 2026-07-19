class Solution {
public:
long long C(int n, int r){
    if(r < 0 || r > n) return 0;
    if(r > n - r) r = n - r;
    long long res = 1;
    for(int i = 0; i < r; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
    int climbStairs(int n) {
        int y , counter = 0 ;
        for(y = 0 ; y <=n ; y++){
            if ((n - y) >= 0 && (n - y) % 2 == 0){
                int x = (n-y)/2 ;
                counter+=C(x+y, x);
            }
        }
        return counter;
    }
};