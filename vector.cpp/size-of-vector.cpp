#include <bits/stdc++.h>
using namespace std;
	
int main() {
    vector<int>vec1;
    for (auto it:vec1){
        cout<<it<<" ";//empty vector 
    }
    
    vec1.emplace_back(1); //inserting values
    vec1.emplace_back(2);
      vec1.emplace_back(5);
        vec1.emplace_back(10);
          vec1.emplace_back(12);
            vec1.emplace_back(6);
              vec1.emplace_back(9);
    
    
    //size 
    cout<<vec1.size();
    cout<<endl;
    
    
    
	return 0;
}