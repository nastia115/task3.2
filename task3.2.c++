  Задача Array1.
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{   
	  int a[10];
	   int n;
	   cout<<"N:";
	   cin>>n;
	     for (int i=0;i<n;i++)
	        a[i]=1+i*2;
	    for(int i=0;i<n;++i)
	        cout<<"a["<<i<<"]="<<a[i]<<endl;}
Задача Array2.
	int a[100];
	int n;
	cout<<"N:";
	cin>>n;
	 for(int i=0; i<n;i++)
	   a[i]=2+i*2;
	for(int i=0;i<n;++i)
	   cout<<"a["<<i<<"]="<<a[i]<<endl;												   									                                                      
}
Задача Array.3.
int a,d,n;
    cout<<"A:";
    cin>>a;
    cout<<"D:";
    cin>>d;
	cout<<"N:";
    cin>>n;
	int arr[n] {n};
		
	for (int i=1;i<n;i++){	
	arr[i]=a+(i*d);
	}   
	 for (int i=1;i<n;i++);
	 cout<<"arr[i]="<<arr[n]<<endl; }
Задача Array.13.
const int length=5;
	   int array[length]={31,50,10,25,40};
	   for(int startIndex =0;startIndex<length-1; ++startIndex){
	   	int smallestIndex=startIndex;
	   	for(int currentIndex=startIndex+1; currentIndex<length;++currentIndex)
	   	if(array[currentIndex] <array[smallestIndex])
	   	smallestIndex=currentIndex;
	   }                                           
    swap(array[startIndex],array[smallestIndex]);
     for(int index=0;index<length;++index)
	cout<<array[index]<<"";
}
Задача Array.16.
#include <iostream>
#include <ctime>
using namespace std;
int main() {
srand(time(0));
int n;
cin >> n;
int array[n];
for (int i = 0;i < n;++i)
{
array[i] = rand() % 90 + 10;
cout << array[i] << " ";
}
cout << endl;
for (int i = 0;i < n / 2;++i)
{
cout << array[i] << " ";
cout << array[n — 1 — i] << " "; 

}
if (n % 2 != 0)
cout << array[n / 2];
}
