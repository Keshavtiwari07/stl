#include <bits/stdc++.h>
using namespace std;
	
int main() {
    array <int ,10>arr={1,3,5,7,9,8,2,3,1,4}; 
	for (auto it=arr.begin();it!=arr.end();it++){// start to end will be printed 
    // in reverse end to start will be printed
       //auto it=arr.rbegin();it!=arr.rend();it++   
	      //auto it=arr.end-1;it!=arr.rbegin();it-- 

           cout <<*it<<" ";//1 3 5 7 9 8 2 3 1 4 output
	}
	return 0;
}