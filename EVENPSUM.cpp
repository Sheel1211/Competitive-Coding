/*You are given two positive integers A and B. Find the number of pairs of positive integers (X,Y) such that 1≤X≤A, 1≤Y≤B and X+Y is even.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers A and B.

Output
For each test case, print a single line containing one integer ― the number of valid pairs.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int A,B;
	    cin>>A>>B;
	    int count=0;
	    for(int i=1;i<=A;i++){
	        for(int j=1;j<=B;j++){
	            if((i+j)%2 == 0)
	                count++;
	            
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
