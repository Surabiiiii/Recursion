#include <iostream>

using namespace std;
// Replace Character Recursively
void replaceCharacter(char input[], char c1, char c2) {
    if(input[0]=='\0')
        return ;
    if(input[0]==c1)
    {
        input[0]=c2;


    }

        replaceCharacter(input+1,c1,c2);
    
}
//Remove Duplicates Recursively
void removeConsecutiveDuplicates(char *input) {
	if(input[0]=='\0')
        return ;
    if(input[0]==input[1])
    {int i;
        for(i=0;input[i]!='\0';i++)
        {
            input[i]=input[i+1];
        }
        input[i]='\0';
        removeConsecutiveDuplicates(input);
    }
    removeConsecutiveDuplicates(input+1);


}
//Merge sort
void merge(int arr[],int start,int mid,int end)
{
    int n1=mid-start+1;
    int n2=end-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[start+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=start;
    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k++]=a[i];
            i++;
        }
        else if(a[i]>b[j])
        {
            arr[k++]=b[j];
            j++;
        }
    }
    while(i<n1)
    {
        arr[k++]=a[i];
        i++;
    }
    while(j<n2)
    {
        arr[k++]=b[j];
        j++;
    }

}

void mergesort(int input[],int start,int end)
{
    if(start>=end)
        return ;
    if(end>start)
    {int mid=(start+end)/2;
    mergesort(input,start,mid);
    mergesort(input,mid+1,end);
    merge(input,start,mid,end);}
}

void mergeSort(int input[], int size){
        mergesort(input,0,size-1);
}

// Check AB
bool checkAB(char input[]) {
	// Write your code here
if(input[0]=='\0')
        return true;
	if(input[0]!='a')
           return false;

    if(input[1]!='\0'&&input[2]!='\0')
    {
        if(input[1]=='b'&&input[2]=='b')
            return checkAB(input+3);
    }
    return checkAB(input+1);
}


