class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int> fr;
        for(int ele : arr){
            fr[ele]++;
        }
        vector<pair<int, int>> vec(fr.begin(),fr.end()); 
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const   pair<int, int>& b) {
        return a.second > b.second;
    });
  vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(vec[i].first);  
    }
    return result;
    }
};
