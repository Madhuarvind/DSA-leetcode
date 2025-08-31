class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        vector<char> isFriend(n+1,0);
        for(int x:friends)isFriend[x]=1;
vector<int>ans;
ans.reserve(friends.size());
       for(int x:order) 
           if(isFriend[x]) ans.push_back(x);
       return ans;
    }
};