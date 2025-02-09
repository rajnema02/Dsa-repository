#include<iostream>
#include<unordered_map>
#include<queue>

using namespace std;

class solution{
    public:
        string FirstNonRepeating(string A){
            unorderd_map<char, int> count;
            queue<int> q;
            string ans = " ";

            for(int i = 0; i<A.length(); i++){
                char ch = A[i];

                //increase count
                count[ch]++;

                //queue mai push karo
                q.push(ch);

                while(!q.empty()){
                    if(count[q.front()] >1){
                        // repeating character
                        q.pop();
                    }
                    else{
                        //non-repeating character milgaya
                        ans.push_back(q.front());
                        break;
                    }
                }

            }
            return ans;
        }

};

int main(){

}