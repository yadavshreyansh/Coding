The most popular feature on snapchat is Snapchat Streak.
A streak is maintained between two people if both of them send at least one snap to each other daily.
If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 00.

Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for NN consecutive days.
On the i^{th}i 
th
  day, Chef sent A_iA 
i
​
  snaps to Chefina while Chefina sent B_iB 
i
​
  snaps to Chef.

Find the maximum streak count they achieved in those NN days.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer NN — the number of days you observed.
The second lines contains NN space-separated integers — A_1, A_2, \ldots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
 , the number of snaps Chef sent to Chefina on the i^{th}i 
th
  day.
The third lines contains NN space-separated integers — B_1, B_2, \ldots, B_NB 
1
​
 ,B 
2
​
 ,…,B 
N
​
 , the number of snaps Chefina sent to Chef on the i^{th}i 
th
  day.
Output Format
For each test case, output on a new line, the maximum streak count they achieved in those NN days.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10001≤N≤1000
0 \leq A_i, B_i \leq 1000≤A 
i
​
 ,B 
i
​
 ≤100
Sample 1:
Input
Output
4
3
3 1 2
2 4 1
2
0 0
10 10
4
5 4 0 2
3 1 1 0
5
0 1 1 2 0
1 1 0 0 3
3
0
2
1
Explanation:
Test case 11: For all 33 days, both Chef and Chefina sent at least one snap per day. Thus, at the end of third day, the streak count is 33.

Test case 22: Chef did not send any snap to Chefina. Thus, at the streak count remains 00 on both days.

Test case 33: For the first two days, both Chef and Chefina send at least one snap per day. Thus, at the end of second day, the streak count is 22.
On the end of third day, since Chef did not send any snap, the streak count becomes 00.
On the end of fourth day, since Chefina did not send any snap, the streak count remains 00.

Test case 44:

On the end of first day, since Chef did not send any snap, the streak count remains 00.
On second day, both Chef and Chefina sent at least one snap. Thus, the streak count becomes 11.
On the end of third day, since Chefina did not send any snap, the streak count becomes 00.
On the end of fourth day, since Chefina did not send any snap, the streak count remains 00.
On the end of fifth day, since Chef did not send any snap, the streak count remains 00.
The maximum streak count over 55 days is 11.
  
  
  
  
  #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   int a[n],b[n];
	   for(int i=0; i<n; i++){
	       cin>>a[i];
	       
	   }
	     for(int i=0; i<n; i++){
	       cin>>b[i];
	       
	   }
	   long long cnt=0;
	   long long maxi = 0;
	   for(int i=0; i<n; i++){
	       if (a[i]>0 &&b[i]>0){ cnt++;maxi=max(cnt, maxi);}
	       else cnt= 0;
	       
	   }
	   cout<<maxi<<endl;
	}
	return 0;
}
