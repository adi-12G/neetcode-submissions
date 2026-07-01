class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
     for(int i = 0; i<strs.size(); i++){
         ans+=to_string(strs[i].length());
        ans += "#";
        ans += strs[i];
     }

     return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

         while (i < s.length()) {

            string len = "";

            while (s[i] != '#') {
                len += s[i];
                i++;
            }
   int length = stoi(len);

            i++;

            string word = "";

            for(int j = 0; j<length; j++){
                word+=s[i];
                i++;
            }

ans.push_back(word);
         }
        
return ans;
    }


};
