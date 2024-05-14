 #include<stdio.h>
int main(){
    int x,ar[6]={8,6,4,3,2,1},as=6;
    printf("Enter your Search Value :");
    scanf("%d",&x);

    int value=linearSearch(ar,as,x);
    if(value > -1){
        printf("The index number of %d",value);
    }else{
        printf("The index number is not found.");
    }


return 0;
}
int linearSearch(int a[], int n,int s){
    for(int i=0;i<n;i++){
        if(s==a[i]){
            return i;
        }
    }return -1;

}
