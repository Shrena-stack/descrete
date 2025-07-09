#include<stdio.h>
int main(){
	int p,q,r;
	printf("Truth table for (p ^ ~q v r) <-> (~p v r)\n");
	printf ("p q r | ~q p & ~q (p 7 ~q) |r ~p ~p| r result \n");
	printf("--------------------------------------------------\n");
	
	for (p=0;p<=1;p++){
		for (q=0;q<=1;q++){
			for (r=0;r<=1;r++){
				int not_q = !q;
				int p_and_notq = p && not_q;
				int left = p_and_notq || r;
				int not_p =!p;
				int right = not_p || r;
				int result =(left == right);
				
				printf("%d %d %d | %d %d %d %d %d %d\n",p,q,r,not_q, p_and_notq, left, not_p, right, result);
			}
		}
	}
	return 0;
}
