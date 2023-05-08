#include<iostream>
using namespace std;
int funcaverage(int a, float b){
	float avg = (a+b)/2;
	return avg;
}
int main(){
	float a;
	a = funcaverage(5,2.9);
	cout<<"the average of these numbers is "<<a;
	return 0;
}
