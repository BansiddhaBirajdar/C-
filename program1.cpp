// 1. Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum
#include<bits/stdc++.h>
using namespace std;
int sum(int ino1,int ino2){
	return ino1==ino2?(ino1+ino2)*3:(ino2+ino1);
}
int main()
{
	int ino1,ino2;
	cin>>ino1>>ino2;
	cout<<"Output::"<<sum(ino1,ino2);
}
