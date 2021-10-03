#include <iostream>
using namespace std;
int main()
{
 int num = 0;   
int arr1[4]={0,1,1,2};
int arr2[3]= {0};
for(int i = 0 ; i <=3; i++)
arr2[arr1[i]]++;
for(int j = 0 ; j <3 ; j++)
cout << num++ << " : " <<arr2[j] << endl;
return 0;

}