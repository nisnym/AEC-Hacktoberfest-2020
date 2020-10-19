//longest consecutive sequence
class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int n=v.size();
        unordered_set<int>s;
	    int maximum=0;
	
		s.insert(v.begin(),v.end());
	
        for(int i=0;i<n;i++)
        {

            if(s.find(v[i]-1) == s.end())
            {
                int curr_max=1;
                // cout<<curr_max<<endl;

                int j=v[i]+1;
                while(s.find(j) != s.end())
                {
                    j++;
                    curr_max++;
                    // cout<<curr_max<<endl;
                }
                maximum=max(maximum,curr_max);
            }
        }
        return maximum;
    }
};