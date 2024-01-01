#include <bits/stdc++.h>
using namespace std;
	
int main() {
    vector<int>vec1;
     vec1.emplace_back(1); //inserting values (input)
    vec1.emplace_back(2);
      vec1.emplace_back(5);
        vec1.emplace_back(10);
         for (auto it:vec1){
        cout<<it<<" ";   // prints value that we inserted 1 2 5 10 
    }
    	return 0;
}