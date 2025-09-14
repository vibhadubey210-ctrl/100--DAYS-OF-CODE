 //Write a program to input time in seconds and convert it to hours:mintues:seconds format.
 #include <stdio.h>
 int main()  {
 int sec,min,hr;
 printf("Enteer time in seconds:\n");
 scanf("%d",&sec);
 hr=sec/3600;
 sec=sec%3600;
 min=sec/60;
 sec=sec%60;
 printf("Time is %02d:%02d:%02d",hr,min,sec);
 return 0;
}