#include <bits/stdc++.h>
using namespace std;
	
int main() {
    array <int ,10>arr={1,3,5,7,9,8,2,3,1,4};
	for (auto it=arr. begin();it!=arr. end();it++){
       //auto it=arr.rbegin();it!=arr.rend();it++
	    cout <<*it<<" ";//1 3 5 7 9 8 2 3 1 4 
	}
	return 0;
}