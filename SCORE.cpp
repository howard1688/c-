#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y,z;
	float sc;
	for(int i=1;i<=10;i++){
		cout<<"��J�y��"<<i<<"���T�Ӧ��Z"<<endl;
		cin>>x>>y>>z; 
		sc=(x+y+z)/3;
		if(sc>=90){
		
		cout<<"�y��"<<i<<"���P�� �`������"<<sc<<"��oA"<<endl; 
		}
		else if(sc<90&&sc>=76){
		
		cout<<"�y��"<<i<<"���P�� �`������"<<sc<<"��oB"<<endl; 
		}
		else if(sc<76&&sc>=60){
		
		cout<<"�y��"<<i<<"���P�� �`������"<<sc<<"��oC"<<endl; 
		}
		else if(sc<=59&&sc>=50){
		
		cout<<"�y��"<<i<<"���P�� �`������"<<sc<<"��oD"<<endl;
		
		}
		else{
			cout<<"�y��"<<i<<"���P�� �`������"<<sc<<"��oE"<<endl;	
		}
	}
	return 0;
}
