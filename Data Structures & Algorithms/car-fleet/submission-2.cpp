class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        int n = speed.size();

        for (int i = 0; i < n; i++) {
            pair<int, int> p;
            p.first = position[i];
            p.second = speed[i];
            cars.push_back(p);
        }

        sort(cars.begin(), cars.end(), [](auto a, auto b) { return a.first > b.first; });
        stack<double>st ; 
        for(int i = 0 ; i<n; i++){
            double time = (target - cars[i].first)/(double)cars[i].second ;
            if(!st.empty() && time <=st.top()){
                continue ;
            }
            st.push(time);
        }
        return st.size();
    }
};
