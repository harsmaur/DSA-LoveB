	string FirstNonRepeating(string A){
		 unordered_map<char, int> count;
		 queue<int> q;
		 string ans = "";
		 
		 for(int i=0; i<A.length(); i++){
		     char ch = A[i];
		     
		     //increase count of ch 
		     count[ch]++;
		     
		     //queue me  push karo
		     q.push(ch);
		     
		     while(!q.empty()){
		         if(count[q.front()] > 1){
		             // repeating character
		             q.pop();
		         }
		         else{
		          //   Non repeating character
		          ans.push_back(q.front());
		          break; // answer milgya loop se bahaar chle jao
		         }
		     }
		     if(q.empty()){
		         ans.push_back('#');
		     }
		 }
		 return ans;
		 
		 
		 
		 
		}