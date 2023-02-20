#include <stdio.h>

int main() {
    int score;
    while (1) {
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter The NFL score: ");
        scanf("%d", &score);
        if (score == 0 || score == 1) {
            break;
        }

        for (int eight = 0; eight <= score / 8; ++eight) {
            for (int seven = 0; seven <= (score - eight * 8) / 7; ++seven) {
                for (int six = 0; six <= (score - eight * 8 - seven * 7) / 6; ++six) {
                    for (int three = 0; three <= (score - eight * 8 - seven * 7 - six * 6) / 3;
                         ++three) {
                        for (int two = 0;
                             two <= (score - eight * 8 - seven * 7 - six * 6 - three * 3) / 2;
                             ++two) {
                            if (score - eight * 8 - seven * 7 - six * 6 - three * 3 - two * 2 ==
                                0) {
                                printf(
                                    "%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                    eight,
                                    seven,
                                    six,
                                    three,
                                    two);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}