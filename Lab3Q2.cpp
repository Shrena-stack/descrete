#include<stdio.h>
int main(){
	int p,q;
	printf("p | q | p ->q | !q | | !p |  premises | conclusion valid\n");
	printf("--------------------------------------------\n");
	
	for (p=0; p<=1; p++){
		for (q=0; q<=1; q++){
			int imp =(!p) ||q;
			int notq =!q;
			int notp =!p;
			int premises = imp && notq;
			int valid =(!premises) || notp;
			
			printf("%d | %d |  %d  | %d | %d | %d | %d |\n",p,q,imp, notq, notp, premises,valid);
		}
	}
	return 0;
}
