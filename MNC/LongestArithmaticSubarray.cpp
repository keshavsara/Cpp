/*
probelm:
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal
for example 
[9,10],[3,3,3],[9,7,5,3] are arithmetic arrays 
while 
[1,3,3,7],[2,1,2] and [1,2,4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers.
 The i-th integer of the array is A,. 
 She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. 
Please help her to determine the length of the longest contiguous arithmetic subarray.
*/
/*
Input:
The first line of the input gives the number of test cases, T. T test cases follow.
 Each test case begins with a line containing the integer N.
  The second line contains N integers. 
  The i-th integer is A,

 Output:
For each test case, output one line containing Case #x: Y, 
where x is the test case number (starting from 1) and
y is the length of the longest contiguous arithmetic subarray.

*/
/*
constraints:

Time limit: 20 seconds per test set.
Memory limit: 1GB.
1≤T ≤ 100.
03A,$ 10°.
Test Set 1
2 SN ≤ 2000.
Test Set 2
2 ≤ N≤2 × 10° for at most 10 test cases.
For the remaining cases, 2 ≤ N ≤ 2000.
1 sec = 10ª operations (approx)
20 sec =2 x 10° operations (approx)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int ans=2;
int pd = a[1]-a[0];
int j=2;
int curr = 2;

while(j<n)
{
    if(pd == a[j]-a[j-1])
{
    curr++;
}
else{
    pd = a[j]-a[j-1];
    curr = 2;
}
    ans = max(ans , curr);
    j++;

}
cout<<ans<<endl;
return 0;

}
