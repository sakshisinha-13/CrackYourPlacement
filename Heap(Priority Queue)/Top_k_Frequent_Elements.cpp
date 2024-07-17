class Solution {
public:
#define pi pair<int,int>
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto x:mp){
            int key=x.first;
            int freq=x.second;
            pq.push({freq,key});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
            pi x=pq.top();
            pq.pop();
            ans.push_back(x.second);
        }
        return ans;
    }
};
