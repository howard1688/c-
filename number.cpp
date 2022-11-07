#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x,y;
	srand(time(NULL));
	x=rand()%20+1;
	for(int i=1;i<=5;i++){
		cin>>y;
		if(y>=1&&x<=20){
			if(x>y){
				cout<<"太小 請適度增加"<<endl; 
			}
			if(x<y){
				cout<<"太大 請適度減少"<<endl; 
			}
			if(x==y){
				cout<<"猜對了好棒欸"<<endl; 
			}
		}
		else{
			cout<<"輸入錯誤"<<endl; 
		}
	
	}
	cout<<"答案為"<<x<<endl;
	return 0;
}
