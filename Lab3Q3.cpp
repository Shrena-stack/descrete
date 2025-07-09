#include <stdio.h>

int main() {
    int P, Q, R;
    int valid = 1;

    printf("P Q R | P?Q (P?Q?R) AllPremises ¬P\n");
    printf("------+---------------------------\n");
    for (P = 0; P <= 1; P++) {
        for (Q = 0; Q <= 1; Q++) {
            for (R = 0; R <= 1; R++) {
                int p1 = P || Q;
                int p2 = (!(P && Q)) || R;
                int p3 = Q;
                int p4 = !R;
                int premises = p1 && p2 && p3 && p4;
                int conclusion = !P;
                printf("%d %d %d |  %d      %d        %d       %d\n",
                    P, Q, R, p1, p2, premises, conclusion);

                if (premises && !conclusion) {
                    valid = 0;
                }
            }
        }
    }

    if (valid)
        printf("\nThe argument is VALID: no case where all premises are true and ¬P false.\n");
    else
        printf("\nThe argument is INVALID: a counterexample was found.\n");

    return 0;
}

