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
				cout<<"�Ӥp �оA�׼W�["<<endl; 
			}
			if(x<y){
				cout<<"�Ӥj �оA�״��"<<endl; 
			}
			if(x==y){
				cout<<"�q��F�n����"<<endl; 
			}
		}
		else{
			cout<<"��J���~"<<endl; 
		}
	
	}
	cout<<"���׬�"<<x<<endl;
	return 0;
}
