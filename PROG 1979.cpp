# include <stdio.h>
int main(){
	int arr[5]={6,1,4,5,7};
	int min=arr[0],max=arr[0];
	for(int i=1;i<5;i++){
       if(arr[i]>max)
          max=arr[i];
       if(arr[i]<min)
		 min=arr[i];
	}  
	for(int i=max;i>=1;i--){
		if (max % i == 0 && min % i == 0) {
            return i;
      }
	}
}

