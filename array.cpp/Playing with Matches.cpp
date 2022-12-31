Read problems statements in Mandarin Chinese, Russian, Vietnamese, and Bengali as well.
Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.

The first thing Chefu wanted to do was to calculate the result of his homework — the sum of AA and BB, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.

Digits are formed using matches in the following way: 

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers AA and BB.
Output
For each test case, print a single line containing one integer — the number of matches needed to write the result (A+BA+B).

Constraints
1 \le T \le 1,0001≤T≤1,000
1 \le A, B \le 10^61≤A,B≤10 
6
 
Sample 1:
Input
Output
3
123 234
10101 1010
4 4
13
10
7
Explanation:
Example case 1: The result is 357357. We need 55 matches to write the digit 33, 55 matches to write the digit 55 and 33 matches to write the digit 77.

Example case 2: The result is 1111111111. We need 22 matches to write each digit 11, which is 2 \cdot 5 = 102⋅5=10 matches in total.
  
  
  
  
  
  
  
  
  #include <iostream>
using namespace std;

int arr[]={6,2,5,5,4,5,6,3,7,6};

int main() {
	int t;
	cin>>t;
	int count=0;
	while(t--){
	    int a,b,sum=0;
	    cin>>a>>b;
	    int c=a+b;
	    while(c>0){
	        int dig=c%10;
	        sum+=arr[dig];
	        c=c/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
