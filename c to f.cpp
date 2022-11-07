#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y;
	float tempc,tempf;
	cout<<"輸入華視轉攝氏1攝氏轉華視2"<<endl;
	cin>>x;
	cin>>y;
	if(x==1){
		tempf=y*9/5;
		cout<<tempf<<endl;
		
	}
	else if(x==2){
		tempc=(y-32)*5/9;
		cout<<tempc<<endl; 
	} 
	else
	{
		cout<<"輸入錯誤"<<endl; 
	}
	
	return 0;
}
