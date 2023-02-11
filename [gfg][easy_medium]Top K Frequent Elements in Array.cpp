class Solution {
  public:
    public:
    
    // Using heap
    
    vector<int> topK(vector<int>& nums, int k) {
        
        priority_queue<pair<int, int>> pq;
        
        unordered_map<int, int> map;
        
        for(int i=0; i<nums.size(); i++)
            map[nums[i]]++;
            
        for(auto i : map){
            pq.push({i.second, i.first});
        }
        vector<int> ans;
        
        for(int i=0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
    
    // not using heap
    // static bool mycmp(pair<int,int> a,pair<int,int> b)

    // {
    //     if(a.second > b.second)
    //   return true;
    //   else if(a.second == b.second)
    //   return a.first > b.first;
    //   else    
    //   return false;
    // }
    // vector<int> topK(vector<int>& nums, int k) {
    //     // Code here
    //     map <int,int> m;
    //     for(auto i : nums)
    //     {
    //         m[i]++;
    //     }
    //     vector <pair<int,int>> arr;
    //     for (auto i : m)
    //     {
    //         arr.push_back({i.first,i.second});
    //     }
    //     sort(arr.begin(),arr.end(),mycmp);
    //     vector <int> ans;
    //     for(int i = 0;i < k;i++)
    //     {
    //         ans.push_back(arr[i].first);
    //     }
    //     return ans;
    // }
};