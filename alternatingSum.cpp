class Solution {
public:
    int alternatingSum(vector<int>& a) {
        int n = a.size();
        int sum=0;
        for(int i=0; i<n; i++) {
            if(i%2) sum-=a[i];
            else sum+=a[i];
        }
        return sum;
    }
};
