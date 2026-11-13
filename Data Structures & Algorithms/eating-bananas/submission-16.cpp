class Solution {
public:
    long long findHour(vector<int>& piles, int currSpeed) {
        long long ans = 0;

        for(auto it : piles) {
            ans += (it + (long long)currSpeed - 1) / currSpeed;
        }

        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int j = *max_element(piles.begin(), piles.end());

        int i = 1;

        int ans = 0;
        while(i <= j) {
            int currSpeed = i + (j - i)/2;

            long long hours = findHour(piles, currSpeed);
            cout<<"hours "<<hours<<" ";
            if(hours <= h) {
                ans = currSpeed;
                j = currSpeed - 1;
            } else i = currSpeed + 1;
        }
        return ans;
        
    }
};
