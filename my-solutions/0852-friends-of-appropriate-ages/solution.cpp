class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        vector <int> freq(121,0);

        for(int x:ages) freq[x]++;

        int totalReq = 0;
        for(int ageA = 0;ageA<121;ageA++){
            int countA = freq[ageA];
            if(countA==0) continue;
            for(int ageB = 0;ageB<121;ageB++){
                int countB = freq[ageB];
                if(countB==0) continue;
                if(ageB <=0.5*ageA + 7) continue;
                if(ageB>ageA) continue;
                if(ageB>100 && ageA <100) continue;
            totalReq += countA*countB;
            if(ageA==ageB) totalReq -= countB;//see ex 1
            }
        }
        return totalReq;
    }
};
