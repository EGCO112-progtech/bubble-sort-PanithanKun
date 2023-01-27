// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 
int Isprime(int a)
{
  int i,j,counter;
  counter=0;
  for(i=2;i<a; i++)
    {
     if(a%i==0){
       break;
    }
      }
    if(i==a)
    {
     counter=1;
    }

  
    return counter;
  }



void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(i=0;i<n-1;i++){
  sorted =0;
//printf("----------------%d-------------------\n",i+1);
for(j=0;j<n-1-i;j++)
  {
   if(a[j]>a[j+1])
   {
   swap(&a[j],&a[j+1]);
     sorted = 1;
   }
  display(a,n);
  }
  if(sorted==0) break;
 }
  
 //printf("------------------------------------\n");
}




