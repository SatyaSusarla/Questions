#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void findRepeating(int arr[], int n){

    int count = 0;

    for (int i = 0; i < n; i++) {

       int flag = 0;
       while (i < n - 1 && arr[i] == arr[i + 1]){
             flag = 1;
             i++;
       }
       if(flag)
          cout<<arr[i-1]<<" ";
    }

}

int non_repeating_elements(int arr[], int n)
{
int i,j;
int count = 1;
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
if(arr[i] == arr[j] && i != j)
break;
}
if(j == n )
{
cout<<arr[i]<<" ";
++count;
}
}
return -1;
}
int main(){
        int n;
    cout<<"enter the array size"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>a[i];
    }
    int merge[100];
    for(int i=0;i<n;i++){
        merge[i]=a[i];
    }
    int totalelements=n;
    int actualelements=n;
    int check=0;
    do{
        cout<<"do you want to continue"<<endl;
        cin>>check;
        if(check==0){
             break;
        }
        else{
                  int m;
    cout<<"enter the array size"<<endl;
    cin>>m;

    int b[m];
    totalelements+=m;
  
    for(int i=0;i<m;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>b[i];
    }

    
    
    for(int i=0;i<m;i++){
        merge[i+actualelements]=b[i];
    }
      actualelements+=m;
     
      for(int i=0; i<actualelements; i++)
    {
        for(int j=i+1; j<actualelements; j++) { 
            if(merge[i]>merge[j])
            {
                int temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }

int count=0;
for(int j=0;j<actualelements-1;j++){
    for(int k=0;k<actualelements-1;k++){
        if(merge[k]==merge[k+1]){
           count++;
            for(int j=k;j<totalelements-1;j++){
                swap(merge[j],merge[j+1]);
            }
            for(int j=k;j<totalelements-1;j++){
                swap(merge[j],merge[j+1]);
            }
        }
    }
}
    
        }
        }while(check==1);
        cout<<"common elements are : ";
        findRepeating(merge,totalelements);
        cout<<endl;
        cout<<"non common elements are : ";
        non_repeating_elements(merge,totalelements);
         return 0;
    }
    

