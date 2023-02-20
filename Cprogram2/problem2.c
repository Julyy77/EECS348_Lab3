#include <stdio.h>

int main() {
    int score;
    while (1)
    {
    	printf("Enter 0 or 1 to STOP\n");
        printf("Enter The NFL score: ");
        scanf("%d", &score);

        if (score <= 1)
        {
        	printf("Program Error");
            break;
        }

        printf("Possible combinations of scoring plays:\n");

    
        int TD, FG, SF, TD2, TD1;
        int total;

        for (TD2 = 0; TD2 <= score/8 +1; TD2++) {
            for (TD1 = 0; TD1 <=(score-TD2*8)/7 +1; TD1++) {
                for (TD = 0; TD <=(score-TD2*8-TD1*7)/6 +1; TD++) {
                    for (FG = 0; FG <=(score-TD2*8-TD1*7-TD*6)/3 +1; FG++) {
                        for (SF = 0; SF <=(score-TD2*8-TD1*7-TD*6-FG*3)/2 +1; SF++) {
                            score = TD2*8 + TD1*7 + TD*6 + FG*3 + SF*2;
                            if (total ==score) {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", TD2, TD1, TD, FG, SF);
                            }
                        }
                    }
                }
            }
        }

        printf("\n");
    }           
        return 0;
}