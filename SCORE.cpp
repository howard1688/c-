#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y,z;
	float sc;
	for(int i=1;i<=10;i++){
		cout<<"輸入座號"<<i<<"的三個成績"<<endl;
		cin>>x>>y>>z; 
		sc=(x+y+z)/3;
		if(sc>=90){
		
		cout<<"座號"<<i<<"號同學 總平均為"<<sc<<"獲得A"<<endl; 
		}
		else if(sc<90&&sc>=76){
		
		cout<<"座號"<<i<<"號同學 總平均為"<<sc<<"獲得B"<<endl; 
		}
		else if(sc<76&&sc>=60){
		
		cout<<"座號"<<i<<"號同學 總平均為"<<sc<<"獲得C"<<endl; 
		}
		else if(sc<=59&&sc>=50){
		
		cout<<"座號"<<i<<"號同學 總平均為"<<sc<<"獲得D"<<endl;
		
		}
		else{
			cout<<"座號"<<i<<"號同學 總平均為"<<sc<<"獲得E"<<endl;	
		}
	}
	return 0;
}
