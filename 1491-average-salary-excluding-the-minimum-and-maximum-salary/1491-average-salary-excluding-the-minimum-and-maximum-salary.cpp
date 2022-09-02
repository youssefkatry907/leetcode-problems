class Solution {
public:
    double average(vector<int>& salary) {
        double answer;
        sort(salary.begin(),salary.end());
        long long sz = salary.size(),sum = 0;
        double s = salary[0], e = salary[sz-1];
        for(int i = 0; i < sz; ++i) sum += salary[i];
        answer = (double)(sum - (s + e)) / (sz-2);
        return answer;
    }
};