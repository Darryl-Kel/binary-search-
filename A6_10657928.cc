#include<iostream>
using namespace std;
int main()
{  int SearchItem;
    cout<<"Enter the number to search"<<endl;
	cin>>SearchItem;
int list[10]={2,3,4,5,6,7,8,9,10,11};	
int first = 0;
int last = 10 - 1;
int mid;
bool found = false;
while (first <= last && !found)
{
mid = (first + last) / 2;
if (list[mid] == SearchItem)
found = true;
else if (list[mid] > SearchItem)
last = mid - 1;
else
first = mid + 1;
}
if (found)
return mid;
else
return -1;
}
