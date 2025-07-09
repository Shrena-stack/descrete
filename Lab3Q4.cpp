#include <stdio.h>

int main() {
    int P, Q, R;
    int valid = 1; 

    printf("P Q R | P?Q Q?R (P?Q)&&(Q?R) P?R (Implication holds?)\n");
    printf("------------------------------------------------------\n");
    for (P = 0; P <= 1; P++) {
        for (Q = 0; Q <= 1; Q++) {
            for (R = 0; R <= 1; R++) {
                int p_to_q = (!P) || Q;
                int q_to_r = (!Q) || R;
                int both = p_to_q && q_to_r;
                int p_to_r = (!P) || R;
                int implication = (!both) || p_to_r;

                printf("%d %d %d |   %d     %d       %d        %d      %d\n",
                    P, Q, R,
                    p_to_q, q_to_r, both,
                    p_to_r, implication);

                if (!implication) {
                    valid = 0;
                }
            }
        }
    }

    if (valid)
        printf("\n? The argument is VALID: the conditional is a tautology.\n");
    else
        printf("\n? The argument is INVALID: a counterexample exists.\n");

    return 0;
}

