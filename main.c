#include <stdio.h>
void main()
{
    int d,m,y,day,visokosna;
        do{
        printf("MORKOV");
        scanf("%d",&d);
        printf("Enter month");
        scanf("%d",&m);
        printf("Enter year");
        scanf("%d",&y);
        if(y%4==0&&y%100!=0)visokosna=1;
        else visokosna=0;
        }while(m>12||m<0||d>31||d<0||visokosna==0&&d>28&&m==2||visokosna==1&&d>29&&m==2||y<0);

        day=0;

        switch(m)
        {
            case 1:day=d;break;
            case 2:day=31+d;break;



                case 3:if(visokosna==1)
                        {
                            day=60+d;break;
                        }
                        else
                        {
                            day=59+d;break;
                        }
                case 4:if(visokosna==1)
                        {
                            day=91+d;break;
                        }
                        else
                        {
                            day=90+d;break;
                        }
                case 5:if(visokosna==1)
                        {
                            day=121+d;break;
                        }
                        else
                        {
                            day=120+d;break;
                        }
                case 6:if(visokosna==1)
                        {
                            day=152+d;break;
                        }
                        else
                        {
                            day=151+d;break;
                        }
                case 7:if(visokosna==1)
                        {
                            day=182+d;break;
                        }
                        else
                        {
                            day=181+d;break;
                        }
                case 8:if(visokosna==1)
                        {
                            day=213+d;break;
                        }
                        else
                        {
                            day=212+d;break;
                        }
                case 9:if(visokosna==1)
                        {
                        day=244+d;break;
                        }
                        else
                        {
                            day=243+d;break;
                        }
                case 10:if(visokosna==1)
                        {
                            day=274+d;break;
                        }
                        else
                        {
                            day=273+d;break;
                        }
                case 11:if(visokosna==1)
                        {
                            day=305+d;break;
                        }
                        else
                        {
                            day=304+d;break;
                        }
                case 12:if(visokosna==1)
                        {
                            day=335+d;break;
                        }
                        else
                        {
                            day=334+d;break;
                        }
        }
        printf("day=%d",day);
}

