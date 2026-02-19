#include <stdio.h>

int main()
{

    // int vaulu_of_total_grage;
    // printf("%d",vaulu_of_total_grage);  //used votg

    float pmarks, cmarks, mmarks;
    printf("Enter your phycis percentage :");
    scanf("%f", &pmarks);
    printf("Enter your chemistry percentage :");
    scanf("%f", &cmarks);
    printf("Enter your mathematics percentage :");
    scanf("%f", &mmarks);
    float total = (mmarks + pmarks + cmarks) / 3;
    printf("Your percentage in physics is %f\n", pmarks);
    printf("Your percentage in chemistry is %f\n", cmarks);
    printf("Your percentage in mathematics is %f\n", mmarks);
    printf("Your total percentage is %f\n", total);
    if (pmarks >= 33 && cmarks >= 33 && mmarks >= 33 && total >= 40 && pmarks <= 100 && cmarks <= 100&& mmarks <= 100 && total <= 100)
    {
        printf("AND you have passed\n");
    }
    else if(pmarks > 100 || cmarks > 100|| mmarks > 100 || total > 100)
    {
        printf("YOU have entered invalid marks");
    }
    else if (pmarks < 33 || cmarks < 33 || mmarks < 33)
    {
        printf("AND you have failed due to individual subjects(s)");
    }
    else if (pmarks >= 33 && cmarks >= 33 && mmarks >= 33 && total < 40)
    {
        printf("AND you have failed due to total is less than 40 percentage");
    }
    else
    {
        printf("invalid input");
    }
    scanf("%f", &cmarks); // only to pause excution
    return 0;
}