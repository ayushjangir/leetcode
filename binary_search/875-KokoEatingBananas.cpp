class Solution {
public:

    long long calculateTotalhours(vector<int>&piles,int speed){
        long long totalH=0;
        for(int bananas : piles){
            totalH += ceil((double)bananas/speed);
        }
        return totalH;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *max_element(piles.begin(),piles.end());
        int low=1, high = maxPile;

        while(low<=high){
            int mid=(low+high)/2;
            long long totalHours = calculateTotalhours(piles,mid);

            if(totalHours <= h){
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }

};
