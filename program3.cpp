// 3. Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.
// Sample Input:
// 30, 0
// 25, 5
// 20, 30
// 20, 25
// Sample Output:
// 1
// 1
// 1
// 0
#include<bits/stdc++.h>
using namespace std;
bool check(int ino1,int ino2){
	return (ino1==30)||(ino2==30)||(ino1+ino2==30)?true:false;
}
int main()
{
	int ino1,ino2;
	cin>>ino1>>ino2;
	cout<<"Result :: "<<check(ino1,ino2);

}