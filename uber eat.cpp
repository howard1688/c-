#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x;
	float money;
	cout<<"��J�Z��"<<endl;
	cin>>x;
	if(x<=10&&x>=0){
	money=50+x*14.5;
}
	else if(x>10&&x<=30){
		money=((x-10)*14.5)*0.2+((x-10)*14.5)+50+145;
	}
	else{
		money=((x-30)*14.5)*0.4+((x-30)*14.5)+50+493;	
	} 

	if(money<=80&&money>0){
	cout<<"���ꬰ80"<<endl; 
}
	else if(money>80){
	cout<<"���ꬰ"<<money<<endl; 
	}
	else{
	cout<<"���s��J"<<endl; 
	}
	return 0;
}
