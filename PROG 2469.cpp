# include <stdio.h>
  int main(){
	 double celesius,kelvin,fahrenheit;
	 int i=0;
	 printf("enter the temprature");
	 scanf("%lf",&celesius);
	 kelvin= celesius + 273.15;
	 fahrenheit=celesius*1.8 + 32;
	 double temp[2]={kelvin,fahrenheit};
	 for(i;i<2;i++){
	   printf("%lf\n",temp[i]);
	 }
  }

