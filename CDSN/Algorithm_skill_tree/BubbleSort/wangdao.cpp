#include<iostream>
using namespace std;
bool flag;

void BubbleSort(int arr[],int n) {
    for(int i=0;i<n-1;i++){
        flag = false;
        for(int j = n-1; j>i;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                flag = true;
            }
           
        }
        if (flag==false)
        {
            return;
        } 
    }
}
int main(){
    int arr[10];
	int i;
	
	printf("������10����\n");
	for (i = 0; i < 10; i++)		//�����û�����ֵ
	{
		scanf("%d", &arr[i]);
	}
	printf("����ǰ������>");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
 
	printf("\n����������>");
	BubbleSort(arr, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
 
	return 0;
}