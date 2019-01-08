#include<stdio.h>
#include<conio.h>

void main()
{
int gender,ch;
float height,weight;
do
{


printf("\n\n\t\t SELECT YOUR GENDER 1.MALE 2.FEMALE");
scanf("%d",&gender);

switch(gender)
{
case 1:
    printf("\n\n\t\t ENTER YOUR HEIGHT(IN FEET)");
scanf("%f",&height);
printf("\n\n\t\t ENTER YOUR WEIGHT(IN KGS)");
scanf("%f",&weight);

if(height==2.0f&&weight==6.5)
{
printf("PERFECT!");
}
else if(height==2.0f&&weight<6.5)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 6.5 KGS!");
}
else if(height==2.0f&&weight>6.5)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS BE 6.5KGS!");
}
else if(height==2.1f&&weight==7.5)
{
printf("PERFECT!");
}
else if(height==2.1f&&weight<7.5)
{
printf("WEIGHT UNDER THE LIMIT!REQUIRED WEIGHT IS 7.5KGS! ");

}
else if(height==2.1f&&weight>7.5)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 7.5KGS!");
}
else if(height==2.2f&&weight==8.1)
{
printf("PERFECT!");
}
else if(height==2.2f&&weight<8.1)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 8.1KGS!");

}
else if(height==2.2f&&weight>8.1)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 8.1 KGS!");
}
else if(height==2.3f&&weight==8.7)
{
printf("PERFECT!");
}
else if(height==2.3f&&weight<8.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 8.7KGSS! ");

}
else if(height==2.3f&&weight>8.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 8.7KGS!");
}
else if(height==2.4f&&weight==9.1)
{
printf("PERFECT!");
}
else if(height==2.4f&&weight<9.1)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 9.1KGS!");

}
else if(height==2.4f&&weight>9.1)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 9.1KGS!");
}
else if(height==2.5f&&weight==9.7)
{
printf("PERFECT!");
}
else if(height==2.5f&&weight<9.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 9.7KGS!");

}
else if(height==2.5f&&weight>9.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 9.7KGS!");
}
else if(height==2.6f&&weight==10.4)
{
printf("PERFECT!");
}
else if(height==2.6f&&weight<10.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 10.4KGS!");

}
else if(height==2.6f&&weight>10.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 10.4KGS!");
}
else if(height==2.7f&&weight==11.0)
{
printf("PERFECT!");
}
else if(height==2.7f&&weight<11.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 11.0KGS!");
}
else if(height==2.7f&&weight>11.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 11.0KGS!");
}
else if(height==2.8f&&weight==11.7)
{
printf("PERFECT!");
}
else if(height==2.8f&&weight<11.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 11.7KGS!");
}
else if(height==2.8f&&weight>11.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 11.7KGS!");
}
else if(height==2.9f&&weight==12.5)
{
printf("PERFECT!");
}
else if(height==2.9f&&weight<12.5)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 12.5KGS!");
}
else if(height==2.9f&&weight>12.5)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 12.5KGS!");
}
else if(height==3.0f&&weight==13.4)
{
printf("PERFECT!");
}
else if(height==3.0f&&weight<13.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 13.4KGS!");
}
else if(height==3.0f&&weight>13.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 13.4KGS");
}
else if(height==3.1f&&weight==14.0)
{
printf("PERFECT!");
}
else if(height==3.1f&&weight<14.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 14.0KGS!");
}
else if(height==3.1f&&weight>14.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 14.0KGS!");
}
else if(height==3.2f&&weight==15.7)
{
printf("PERFECT!");
}
else if(height==3.2f&&weight<15.7)
{
printf(" WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 15.7KGS!");
}
else if(height==3.2f&&weight>15.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 15.7KGS!");
}
else if(height==3.3f&&weight==16.3)
{
printf("PERFECT!");
}
else if(height==3.3f&&weight<16.3)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 16.3KGS!");
}
else if(height==3.3f&&weight>16.3)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 16.3KGS!");
}
else if(height==3.4f&&weight==17.2)
{
printf("PERFECT!");
}
else if(height==3.4f&&weight<17.2)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 17.2KGS!");
}
else if(height==3.4f&&weight>17.2)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 17.2KGS!");
}
else if(height==3.5f&&weight==17.6)
{
printf("PERFECT!");
}
else if(height==3.5f&&weight<17.6)
{
printf("WEIGHT UNDER THE LIMIT!REQUIRED WEIGHT IS 17.6KGS!");
}
else if(height==3.5f&&weight>17.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 17.6KGS!");
}
else if(height==3.6f&&weight==18.4)
{
printf("PERFECT!");
}
else if(height==3.6f&&weight<18.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 18.4KGS!");
}
else if(height==3.6f&&weight>18.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 18.4KGS!");
}
else if(height==3.7f&&weight==19.6)
{
printf("PERFECT!");
}
else if(height==3.7f&&weight<19.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 19.6KGS!");
}
else if(height==3.7f&&weight>19.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 19.6KGS!");
}
else if(height==3.8f&&weight==20.6)
{
printf("PERFECT!");
}
else if(height==3.8f&&weight<20.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 20.6KGS!");
}
else if(height==3.8f&&weight>20.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 20.6KGS!");
}
else if(height==3.9f&&weight==21.5)
{
printf("PERFECT!");
}
else if(height==3.9f&&weight<21.5)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 21.5KGS!");
}
else if(height==3.9f&&weight>21.5)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 21.5KGS!");
}
else if(height==4.0f&&weight==22.9)
{
printf("PERFECT!");
}
else if(height==4.0f&&weight<22.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 22.9KGS!");
}
else if(height==4.0f&&weight>22.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 22.9KGS!");
}
else if(height==4.1f&&weight==24.2)
{
printf("PERFECT!");
}
else if(height==4.1f&&weight<24.2)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 24.2KGS!");
}
else if(height==4.1f&&weight>24.2)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 24.2KGS!");
}
else if(height==4.2f&&weight==25.6)
{
printf("PERFECT!");
}
else if(height==4.2f&&weight<25.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 25.6KGS! ");
}
else if(height==4.2f&&weight>25.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 25.6KGS!");
}
else if(height==4.3f&&weight==27.3)
{
printf("PERFECT!");
}
else if(height==4.3f&&weight<27.3)
{
printf("WEIGHT BELOW THE LIMIT!REUIRED WEIGHT IS 27.3KGS!");
}
else if(height==4.3f&&weight>27.3)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 27.3KGS!");
}
else if(height==4.4f&&weight==28.6)
{
printf("PERFECT!");
}
else if(height==4.4f&&weight<28.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 28.6KGS! ");
}
else if(height==4.4f&&weight>28.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 28.6KGS!");
}
else if(height==4.5f&&weight==30.1)
{
printf("PERFECT!");
}
else if(height==4.5f&&weight<30.1)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 30.1KGS!");
}
else if(height==4.5f&&weight>30.1)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 30.1KGS!");
}
else if(height==4.6f&&weight==32.0)
{
printf("PERFECT!");
}
else if(height==4.6f&&weight<32.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 32.0KGS!");
}
else if(height==4.6f&&weight>32.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 32.0KGS!");
}
else if(height==4.7f&&weight==34.6)
{
printf("PERFECT!");
}
else if(height==4.7f&&weight<34.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 34.6KGS!");
}
else if(height==4.7f&&weight>34.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 34.6KGS!");
}
else if(height==4.8f&&weight==37.4)
{
printf("PERFECT!");
}
else if(height==4.8f&&weight<37.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 37.4KGS!");
}
else if(height==4.8f&&weight>37.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 37.4KGS!");
}
else if(height==4.9f&&weight==39.9)
{
printf("PERFECT!");
}
else if(height==4.9f&&weight<39.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 39.9KGS!");
}
else if(height==4.9f&&weight>39.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 39.9KGS!");
}
else if(height==5.0f&&weight==41.7)
{
printf("PERFECT!");
}
else if(height==5.0f&&weight<41.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 41.7KGS!");
}
else if(height==5.0f&&weight>41.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 41.7KGS!");
}
else if(height==5.1f&&weight==43.8)
{
printf("PERFECT!");
}
else if(height==5.1f&&weight<43.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 43.8KGS!");
}
else if(height==5.1f&&weight>43.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 43.8KGS!");
}
else if(height==5.2f&&weight==44.2)
{
printf("PERFECT!");
}
else if(height==5.2f&&weight<44.2)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 44.2KGS!");
}
else if(height==5.2f&&weight>44.2)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 44.2KGS!");
}
else if(height==5.3f&&weight==50.8)
{
printf("PERFECT!");
}
else if(height==5.3f&&weight<50.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 50.8KGS!");
}
else if(height==5.3f&&weight>50.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 50.8KGS!");
}
else if(height==5.4f&&weight==54.7)
{
printf("PERFECT!");
}
else if(height==5.4f&&weight<54.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 54.7KGS!");
}
else if(height==5.4f&&weight>54.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 54.7KGS!");
}
else if(height==5.5f&&weight==55.0)
{
printf("PERFECT!");
}
else if(height==5.5f&&weight<55.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 55KGS!");
}
else if(height==5.5f&&weight>55.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 55KGS! ");
}
else if(height==5.6f&&weight==56.0)
{
printf("PERFECT!");
}
else if(height==5.6f&&weight<56.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 56KGS!");
}
else if(height==5.6f&&weight>56.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 56KGS!");
}
else if(height==5.7f&&weight==60.8)
{
printf("PERFECT!");
}
else if(height==5.7f&&weight<60.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 60.8KGS!");
}
else if(height==5.7f&&weight>60.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 60.8KGS!");
}
else if(height==5.8f&&weight==64.4)
{
printf("PERFECT!");
}
else if(height==5.8f&&weight<64.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 64.4KGS!");
}
else if(height==5.8f&&weight>64.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 64.4KGS!");
}
else if(height==5.9f&&weight==66.9)
{
printf("PERFECT!");
}
else if(height==5.9f&&weight<66.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 66.9KGS!");
}
else if(height==5.9f&&weight>66.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 66.9KGS!");
}
else if(height==6.0f&&weight==68.9)
{
printf("PERFECT!");
}
else if(height==6.0f&&weight<68.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 68.9KGS!");
}
else if(height==6.0f&&weight>68.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 68.9KGS!");
}
else if(height==6.1f&&weight==70.3)
{
printf("PERFECT!");
}
else if(height==6.1f&&weight<70.3)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 70.3KGS!");
}
else if(height==6.1f&&weight>70.3)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 70.3KGS!");
}
else if(height==6.2f&&weight==71.5)
{
printf("PERFECT!");
}
else if(height==6.2f&&weight<71.5)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 71.5KGS!");
}
else if(height==6.2f&&weight>71.5)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 71.5KGS!");
}
else if(height==6.3f&&weight==72.9)
{
printf("PERFECT!");
}
else if(height==6.3f&&weight<72.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 72.9KGS!");
}
else if(height==6.3f&&weight>72.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 72.9KGS!");
}
else if(height==6.4f&&weight==73.6)
{
printf("PERFECT!");
}
else if(height==6.4f&&weight<73.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 73.6KGS!");
}
else if(height==6.4f&&weight>73.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 73.6KGS!");
}
else if(height==6.5f&&weight==75.3)
{
printf("PERFECT!");
}
else if(height==6.5f&&weight<75.3)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT IS 75.3KGS!");
}
else if(height==6.5f&&weight>75.3)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT IS 75.3KGS!");
}
else{
    printf("THE ENTERED IS NOT CORRECT!YOU MIGHT HAVE MISTYPED!PLEASE TYPE CAREFULLY");
}
break;

case 2:
    printf("\n\n\t\t ENTER YOUR HEIGHT(IN FEET)");
scanf("%f",&height);
printf("\n\n\t\t ENTER YOUR WEIGHT(IN KGS)");
scanf("%f",&weight);


if(height==2.0f&&weight==6.0)
{
printf("PERFECT!");
}
else if(height==2.0f&&weight<6.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 6.0KGS!");
}
else if(height==2.0f&&weight>6.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 6.0KGS!");
}
else if(height==2.1f&&weight==7.3)
{
printf("PERFECT!");
}
else if(height==2.1f&&weight<7.3)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 7.3KGS!");
}
else if(height==2.1f&&weight>7.3)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 7.3KGS!");
}
else if(height==2.2f&&weight==8.0)
{
printf("PERFECT!");
}
else if(height==2.2f&&weight<8.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 8.0KGS!");

}
else if(height==2.2f&&weight>8.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 8.0KGS!");
}
else if(height==2.3f&&weight==8.6)
{
printf("PERFECT!");
}
else if(height==2.3f&&weight<8.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 8.6KGS!");

}
else if(height==2.3f&&weight>8.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 8.6KGS!");
}
else if(height==2.4f&&weight==9.1)
{
printf("PERFECT!");
}
else if(height==2.4f&&weight<9.1)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 9.1KGS!");

}
else if(height==2.4f&&weight>9.1)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 9.1KGS!");
}
else if(height==2.5f&&weight==9.7)
{
printf("PERFECT!");
}
else if(height==2.5f&&weight<9.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 9.7KGS!");

}
else if(height==2.5f&&weight>9.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 9.7KGS!");
}
else if(height==2.6f&&weight==10.4)
{
printf("PERFECT!");
}
else if(height==2.6f&&weight<10.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 10.4KGS!");

}
else if(height==2.6f&&weight>10.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 10.4KGS!");
}
else if(height==2.7f&&weight==11.0)
{
printf("PERFECT!");
}
else if(height==2.7f&&weight<11.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 11.0KGS!");
}
else if(height==2.7f&&weight>11.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 11.0KGS!");
}
else if(height==2.8f&&weight==11.7)
{
printf("PERFECT!");
}
else if(height==2.8f&&weight<11.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 11.7KGS!");
}
else if(height==2.8f&&weight>11.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 11.7KGS!");
}
else if(height==2.9f&&weight==12.0)
{
printf("PERFECT!");
}
else if(height==2.9f&&weight<12.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 12.0KGS!");
}
else if(height==2.9f&&weight>12.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 12.0KGS!");
}
else if(height==3.0f&&weight==13.4)
{
printf("PERFECT!");
}
else if(height==3.0f&&weight<13.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 13.4KGS!");
}
else if(height==3.0f&&weight>13.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 13.4KGS!");
}
else if(height==3.1f&&weight==14.2)
{
printf("PERFECT!");
}
else if(height==3.1f&&weight<14.2)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 14.2KGS!");
}
else if(height==3.1f&&weight>14.2)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 14.2KGS!");
}
else if(height==3.2f&&weight==15.4)
{
printf("PERFECT!");
}
else if(height==3.2f&&weight<15.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 15.4KGS!");
}
else if(height==3.2f&&weight>15.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 15.4KGS!");
}
else if(height==3.3f&&weight==16.3)
{
printf("PERFECT!");
}
else if(height==3.3f&&weight<16.3)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 16.3KGS!");
}
else if(height==3.3f&&weight>16.3)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 16.3KGS!");
}
else if(height==3.4f&&weight==17.0)
{
printf("PERFECT!");
}
else if(height==3.4f&&weight<17.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 17.0KGS!");
}
else if(height==3.4f&&weight>17.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 17.0KGS!");
}
else if(height==3.5f&&weight==17.9)
{
printf("PERFECT!");
}
else if(height==3.5f&&weight<17.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 17.9KGS!");
}
else if(height==3.5f&&weight>17.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 17.9KGS!");
}
else if(height==3.6f&&weight==18.4)
{
printf("PERFECT!");
}
else if(height==3.6f&&weight<18.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 18.4KGS!");
}
else if(height==3.6f&&weight>18.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 18.4KGS!");
}
else if(height==3.7f&&weight==19.9)
{
printf("PERFECT!");
}
else if(height==3.7f&&weight<19.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 19.9KGS!");
}
else if(height==3.7f&&weight>19.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 19.9KGS!");
}
else if(height==3.8f&&weight==20.9)
{
printf("PERFECT!");
}
else if(height==3.8f&&weight<20.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 20.9KGS!");
}
else if(height==3.8f&&weight>20.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 20.9KGS!");
}
else if(height==3.9f&&weight==21.5)
{
printf("PERFECT!");
}
else if(height==3.9f&&weight<21.5)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 21.5KGS!");
}
else if(height==3.9f&&weight>21.5)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 21.5KGS!");
}
else if(height==4.0f&&weight==22.4)
{
printf("PERFECT!");
}
else if(height==4.0f&&weight<22.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 22.4KGS!");
}
else if(height==4.0f&&weight>22.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 22.4KGS!");
}
else if(height==4.1f&&weight==24.8)
{
printf("PERFECT!");
}
else if(height==4.1f&&weight<24.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 24.8KGS!");
}
else if(height==4.1f&&weight>24.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 24.8KGS!");
}
else if(height==4.2f&&weight==25.8)
{
printf("PERFECT!");
}
else if(height==4.2f&&weight<25.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 25.8KGS!");
}
else if(height==4.2f&&weight>25.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 25.8KGS!");
}
else if(height==4.3f&&weight==28.1)
{
printf("PERFECT!");
}
else if(height==4.3f&&weight<28.1)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 28.1KGS!");
}
else if(height==4.3f&&weight>28.1)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 28.1KGS!");
}
else if(height==4.4f&&weight==29.6)
{
printf("PERFECT!");
}
else if(height==4.4f&&weight<29.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 29.6KGS!");
}
else if(height==4.4f&&weight>29.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 29.6KGS!");
}
else if(height==4.5f&&weight==31.9)
{
printf("PERFECT!");
}
else if(height==4.5f&&weight<31.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 31.9KGS!");
}
else if(height==4.5f&&weight>31.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 31.9KGS!");
}
else if(height==4.6f&&weight==34.8)
{
printf("PERFECT!");
}
else if(height==4.6f&&weight<34.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 34.8KGS!");
}
else if(height==4.6f&&weight>34.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 34.8KGS!");
}
else if(height==4.7f&&weight==36.9)
{
printf("PERFECT!");
}
else if(height==4.7f&&weight<36.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 36.9KGS!");
}
else if(height==4.7f&&weight>36.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 36.9KGS!");
}
else if(height==4.8f&&weight==39.6)
{
printf("PERFECT!");
}
else if(height==4.8f&&weight<39.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 39.6KGS!");
}
else if(height==4.8f&&weight>39.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 39.6KGS!");
}
else if(height==4.9f&&weight==41.5)
{
printf("PERFECT!");
}
else if(height==4.9f&&weight<41.5)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 41.5KGS!");
}
else if(height==4.9f&&weight>41.5)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 41.5KGS!");
}
else if(height==5.0f&&weight==43.7)
{
printf("PERFECT!");
}
else if(height==5.0f&&weight<43.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 43.7KGS!");
}
else if(height==5.0f&&weight>43.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 41.5KGS!");
}
else if(height==5.1f&&weight==45.8)
{
printf("PERFECT!");
}
else if(height==5.1f&&weight<45.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 45.8KGS!");
}
else if(height==5.1f&&weight>45.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 45.8KGS!");
}
else if(height==5.2f&&weight==47.6)
{
printf("PERFECT!");
}
else if(height==5.2f&&weight<47.6)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 47.6KGS!");
}
else if(height==5.2f&&weight>47.6)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 47.6KGS!");
}
else if(height==5.3f&&weight==54.4)
{
printf("PERFECT!");
}
else if(height==5.3f&&weight<54.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 54.4KGS!");
}
else if(height==5.3f&&weight>54.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 54.4KGS!");
}
else if(height==5.4f&&weight==56.7)
{
printf("PERFECT!");
}
else if(height==5.4f&&weight<56.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 56.7KGS!");
}
else if(height==5.4f&&weight>56.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 56.7KGS!");
}
else if(height==5.5f&&weight==57.7)
{
printf("PERFECT!");
}
else if(height==5.5f&&weight<57.7)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 57.7KGS!");
}
else if(height==5.5f&&weight>57.7)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 57.7KGS!");
}
else if(height==5.6f&&weight==58.0)
{
printf("PERFECT!");
}
else if(height==5.6f&&weight<58.0)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 58.0KGS!");
}
else if(height==5.6f&&weight>58.0)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 58.0KGS!");
}
else if(height==5.7f&&weight==59.8)
{
printf("PERFECT!");
}
else if(height==5.7f&&weight<59.8)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 59.8KGS!");
}
else if(height==5.7f&&weight>59.8)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 59.8KGS!");
}
else if(height==5.8f&&weight==60.4)
{
printf("PERFECT!");
}
else if(height==5.8f&&weight<60.4)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 60.4KGS!");
}
else if(height==5.8f&&weight>60.4)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 60.4KGS!");
}
else if(height==5.9f&&weight==61.9)
{
printf("PERFECT!");
}
else if(height==5.9f&&weight<61.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 61.9KGS!");
}
else if(height==5.9f&&weight>61.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 61.9KGS!");
}
else if(height==6.0f&&weight==62.9)
{
printf("PERFECT!");
}
else if(height==6.0f&&weight<62.9)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 62.9KGS!");
}
else if(height==6.0f&&weight>62.9)
{
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 62.9KGS!");
}
else if(height==6.1f&&weight==63.3)
{
printf("PERFECT!");
}
else if(height==6.1f&&weight<63.3)
{
printf("WEIGHT BELOW THE LIMIT!REQUIRED WEIGHT MUST BE 63.3KGS!");
}
else if(height==6.1f&&weight>63.3)
    {
printf("WEIGHT ABOVE THE LIMIT!REQUIRED WEIGHT MUST BE 63.3KGS!");
}
else{
    printf("THE ENTERED WEIGHT DOESNT BELONG TO THE CATEGORY!PLEASE ENTER THE CORRECT WEIGHT!");
}
break;
case 3:
{
printf("\n\n\t\t WRONG SELECTION!");
}
break;
}
printf("\n\n\t\t DO YOU WISH TO CONTINUE 1.YES 2.NO");
scanf("%d",&ch);
}while(ch==1);

}
