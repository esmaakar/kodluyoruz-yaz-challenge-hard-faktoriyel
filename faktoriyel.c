#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=30,r=4;
	double sonuc,f1=1,f2=1,f3=1;
	int i;
	for(i=1;i<=n;i++){
		f1=f1*i;
	}
	for(i=1;i<=r;i++){
		f2=f2*i;
	}
	for(i=1;i<=(n-r);i++){
		f3=f3*i;
	}
	sonuc=f1/(f2*f3);
	printf("30 farkli kisiden 4 farkli kisi %lf sekilde secilebilir.",sonuc);
	return 0;
}
