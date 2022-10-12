class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
         vector<string>ans;
        for(int i=1;i<=n;i++)
        {
            string an;
            if(i%3==0)
                an+="Fizz";
            if(i%5==0)
                an+="Buzz";
            if(an.length()==0)
                an=to_string(i);
            ans.push_back(an);
                
        }
        return ans;
    }
};
