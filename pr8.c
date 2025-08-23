#include<stdio.h>
int main()
{
    int age,choice,ga,ca=0,i;
    float tp=300.0;//fix ticket rate for adults//
    float total=0.0;//it indicates the total prize//

    printf("welcome to sunrise amusement park\n");
    printf("select the mode\n");
    printf("1. single entry\n");
    printf("2. group entry\n");

    printf("enter the choice");
    scanf("%d", &choice);

    if(choice == 1)
    {
            printf("enter the age of visitor");
            scanf("%d", &age);

            //validate age//
            if(age<0||age>120)
            {
                printf("invalid age please enter the age between 0 and 12\n");


            }
            else if(age<12)
            {
                printf("entry type child\n ticket cost:free\n");


            }
            else if(age>=60)
            {
                printf("entry type senior citizen\n ticket cost:free\n");
            }
            else
            {
                printf("entry type adult\n ticket cost:Rs.2f\n",tp);

            }
    }
    else if(choice==2)
    {
            printf("enter the number of people in group");
            scanf("%d", &ga);

            for(i=1; i<=ga; i++)
            {
                printf("enter the age of person%d: ",i);
                scanf("%d", &age);
                if(age<0||age>120)
                {
                    printf("invalid age:please ener the age between 0 and 120\n");
                    continue;
                }
                if(age<12)
                {
                    printf("person%d is a child- free entry\n", i);

                }


                    else if(age>=60)
                    {
                        printf("person%d is a senior citizen-free entry\n", i);

                    }







                }
                //apply group discount//
                if(ca>5)
                {
                    float dis =total*0.10;
                    total=total-dis;
                    printf("group has more than five adults. 10%%discount apply: Rs%.2f\n", dis);

                }
                printf("total ticket cost for group is Rs.2f\n", total);
            }
            {
                printf("invaid choice\n");
            }
            return 0;
    }
















