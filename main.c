/*
Anekin Davis
Cpts317 HW0'
*/


#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char color;

    while (1)
    {
        bool b1 = 0;
        bool b2 = 0;

        while ((color = getchar()) != '\n')
        {
            if (color == '!') //to exit program
            {
                printf("exit program");
                return 0;
            }

            if (b1 == 0 && b2 == 0)
            {
                if (color == 'R')
                {
                    b1 = 1;
                }

                else
                {
                    b1 = 0; // this case where b1 == 0 and b2 == 1 will print no as it doesnt follow the RGY pattern
                    b2 = 1;
                }
            }

            else if (b1 == 1 && b2 == 0)
            {
                if (color == 'G')
                {
                    b2 = 1;
                }

                else
                {
                    b1 = 0;
                    b2 = 1;
                }

            }
            else if (b1 == 1 && b2 == 1)
            {
                if (color == 'Y')
                {
                    b1 = 0;
                    b2 = 0;
                }

                else
                {
                    b1 = 0;
                    b2 = 1;
                }
            }
        }

        if ((b1 == 0 && b2 == 0) || (b1 == 1 && b2 == 0) || (b1 == 1 && b2 == 1))
        {
            printf("yes\n\n");
        }

        else if(b1 == 0 && b2 == 1)
        {
            printf("no\n\n");
        }
    }
}





