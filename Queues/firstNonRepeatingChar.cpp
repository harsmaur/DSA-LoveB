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

		//we do not q.pop() the value if it's count <= 1 because until its count is 1, it remains FIRST non repeating character for the upcoming stream
// ye point dry run karke samjh aya.  bahot sahi