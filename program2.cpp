// 2. Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference
#include <bits/stdc++.h>
using namespace std;
int difference(int ino){
	return(ino>51)?((ino-51)*3):(51-ino);
}

int main(){
	int ino;
	cin>>ino;
	cout<<"Output :: "<<difference(ino);
}