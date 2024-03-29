//MAKING THE MEAL
/*Today, Chef decided to cook some delicious meals from the ingredients in his kitchen. There are N ingredients, represented by strings S1,S2,…,SN. Chef took all the ingredients, put them into a cauldron and mixed them up.

In the cauldron, the letters of the strings representing the ingredients completely mixed, so each letter appears in the cauldron as many times as it appeared in all the strings in total; now, any number of times, Chef can take one letter out of the cauldron (if this letter appears in the cauldron multiple times, it can be taken out that many times) and use it in a meal. A complete meal is the string "codechef". Help Chef find the maximum number of complete meals he can make!

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
N lines follow. For each i (1≤i≤N), the i-th of these lines contains a single string Si.

Output
For each test case, print a single line containing one integer — the maximum number of complete meals Chef can create.*/



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int c=0,d=0,e=0,f=0,h=0,o=0,count=0;
	    int N;
	    cin>>N;
	    while(N--){
	        string s;
	        cin>>s;
	        int l=s.length();
	        while(l--){
	            if(s[l]=='c'){
	                c++;
	            }
	            else if(s[l]=='d'){
	                d++;
	            }
	            else if(s[l]=='e'){
	                e++;
	            }
	            else if(s[l]=='f'){
	                f++;
	            }
	            else if(s[l]=='h'){
	                h++;
	            }
	            else if(s[l]=='o'){
	                o++;
	            }
	        }
	        
	    }
	    while(c>=2 && d>=1 && e>=2 && f>=1 && h>=1 && o>=1){
	        count++;
	        c -= 2;
	        d -= 1;
	        e -= 2;
	        f -= 1;
	        h -= 1;
	        o -= 1;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
