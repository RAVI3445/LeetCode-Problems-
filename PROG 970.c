# include  <stdio.h>
int main(){
	int x,y,bound,i=0,j=0,m=0,currentsum=0;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	printf("enter bound");
	scanf("%d",&bound);
	int num1[20];
	int num2[20];
	int sum[100]; 
    if(x == 1){
    num1[0] = 1;
    i = 1;
    } 
    else{
    int power = 1;
     while(power <= bound){
      num1[i] = power;
      i++;
       power *= x;
    }
   }
    if(y == 1){
    num2[0] = 1;
    j = 1;
    }
    else{
    int power = 1;
     while(power <= bound){
       num2[j] = power;
        j++;
      power *= y;
   }
   }  
	for(int k = 0; k < i; k++){
       for(int l = 0; l < j; l++){
        currentsum = num1[k] + num2[l];
        if(currentsum <= bound){
            int duplicate = 0;
            for(int n = 0; n < m; n++){
                if(sum[n] == currentsum){
                    duplicate = 1;
                    break;
                }
            }
            if(!duplicate){
                sum[m] = currentsum;
                m++;
            }
        }
    }
}
      for(int a = 0; a < m - 1; a++){
         for(int b = 0; b < m - 1 - a; b++){
           if(sum[b] > sum[b + 1]){
            int temp = sum[b];
            sum[b] = sum[b + 1];
            sum[b + 1] = temp;
        }
    }
}
	for(int p=0;p<m;p++){
		printf(" %d",sum[p]);
	}
}
