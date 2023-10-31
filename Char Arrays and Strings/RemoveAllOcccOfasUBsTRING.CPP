class Solution {
public:
    string removeOccurrences(string s, string part) {
        //run the while loop until the length is not zero and the length of sub string is less than the string
        while( s.length() !=0 && s.find(part)  < s.length()){
            
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};