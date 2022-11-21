#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float score[6];
	float r[6];
	for(int i=0;i<=6;i++){
		cin>>score[i];
		if (score[i]>=90&&score[i]<=100){
			r[i]=4.5;		
		}
		else if (score[i]>=85&&score[i]<=89){
			r[i]=4.0;	
		}
		else if (score[i]>=80&&score[i]<=84){
			r[i]=3.7;	
		}
		else if (score[i]>=77&&score[i]<=79){
			r[i]=3.3;	
		}
		else if (score[i]>=73&&score[i]<=76){
			r[i]=3.0;	
		}
		else if (score[i]>=70&&score[i]<=72){
			r[i]=2.7;	
		}
		else if (score[i]>=67&&score[i]<=69){
			r[i]=2.5;	
		}
		else if (score[i]>=63&&score[i]<=66){
			r[i]=2.5;	
		}
		else if (score[i]>=60&&score[i]<=62){
			r[i]=2.0;	
		}
		else if (score[i]>=50&&score[i]<=59){
			r[i]=1.0;	
		}
		else
		{
			r[i]=0;
		}
	}
	for(int i=1;i<=6;i++){
		cout<<score[i]<<",";
		cout<<r[i]<<",";
	}
	
	return 0;
}
