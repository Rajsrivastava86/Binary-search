#include<iostream>
#include<math.h>
using namespace std;

	int BinarySearch(int arr[],int n,int key){ //function for searching element
	    int start=0,end=n-1,mid;
		while(start<=end){
			mid=start+((end-start)/2);
			if(arr[mid]==key)
			return mid;
			else if(arr[mid]>key)
			end=mid-1;
			else
			start=mid+1;
		}
		return -1;
	}
    
	int main(){  // time complexity O(log n) 
	int arr[1000]; // space complexity O(1)
	int n;
	int key;
	// input size of arr
	cout<<"enter the size of arr :";
	cin>>n;
	// enter elements
	cout<<"enter elements :";
	for(int i=0;i<n;i++){
	cin>>arr[i];
    }
     // enter key element
     cout<<"enter the key :";
     cin>>key;
     
	cout<<BinarySearch(arr,n,key)<<endl;
	return 0;
	
}
