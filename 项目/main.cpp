/*
	main
*/
#include"_MES_W_T.h"
#include"_EES_W_T.h"
using namespace std;
int main() {
	printf("�������߾�\n");
	printf("���ߣ�weizi"); 
	string s;
	while(cin>>s) {
		BigNum a,b,sum;
		cin>>a>>b;
		if(s=="+") {
			sum=a+b;
		} else if(s=="-") {
			sum=a-b;
		}
		else if(s=="*"){
			sum=a*b;
		}
//		else if(s=="/"){
//			sum=a/b;
//		}
		sum.print();
	}
	return 0;
}
