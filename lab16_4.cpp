#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &q,int &w,int &e,int &r){
	int x=rand()%3;
	int temp=q;
	if(x==0){
		q=r;
		r=temp;
	}else if(x==1){
		temp=w;
		w=r;
		r=temp;
	}else if(x==2){
		temp=e;
		e=w;
		w=temp;
	}else{
		temp=r;
		q=r;
		r=temp;
	}
}