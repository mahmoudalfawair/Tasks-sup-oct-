#include <iostream>
using namespace std;
int main()
{
int arr[10]={0};
for(int i = 0 ; i <=9 ; i++ )
cin >> arr[i];
int max = arr[0];
for(int j = 0; j <=9 ; j++)
if(max < arr[j])
max = arr[j];

cout << " Max = " << max << endl;
int min = arr[0];
for(int a = 0 ; a <= 9 ; a++)
if(min > arr[a])
min = arr[a];

cout << " mim = " << min << endl;


return 0;
}