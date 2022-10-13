#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	if(n%2==0){
		cout<<"The number is even"<<endl;
	}
	
	else if(n%2!=0){
		cout<<"The number is odd"<<endl;
	}

	else
	cout<<"invalid"<<endl;
	return 0;
}

