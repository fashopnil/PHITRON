#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  int target;
  scanf("%d",&target);
  // 2 4 3 6 8
  int flags = 0;
  for(int i=0; i<n; i++){
    int a = arr[i];
    for(int j=0; j<n; j++){
      if(i!=j){
        if(a + arr[j] == target){
          flags = 1;
          i=n;
          j=n;
        }
      }
    }
  }

  if(flags==1){
    printf("Yes");
  } else{
    printf("No");
  }
}
