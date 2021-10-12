#include "bits/stdc++.h"
using namespace std;
int binarySearchRecursion(int arr[], int left, int right,int value){
	if(left>right){
		return -1;
	}
	int mid =left +(right -left)/2;
	if(arr[mid]<value){
		left = mid + 1;
		return binarySearchRecursion(arr, left, right , value);
	}
	else if(arr[mid] == value){
		return mid;
	}
	else{
		right = mid - 1;
		return binarySearchRecursion(arr, left, right , value);	
	}
}
int binarySearch(int arr[], int left, int right, int value){
	
	while(left<=right){
		int mid = left + (right - left)/2;
		if(arr[mid]==value){return mid;}
		else if(arr[mid]<value){
			left  = mid +1 ;
		}
		else {right  =  mid - 1;}

	}
	return -1;
}
int lowerBound(int arr[], int left, int right, int value){
	int answer = -1;
	while(left<=right){
		int mid = left + (right - left)/2;
		if(arr[mid]==value){return arr[mid];}
		else if(arr[mid]<value){
			left  = mid +1 ;
		}
		else {
			answer =  arr[mid];
			right  =  mid - 1;}

	}
	return answer;
}
int main(){
	
	int arr[] = {2,3,5,6,8,9,10,12};
	int n = 8;
	cout<<lowerBound(arr,0,8,1)<<endl;
	cout<<lowerBound(arr,0,8,2)<<endl;
	cout<<lowerBound(arr,0,8,3)<<endl;
	cout<<lowerBound(arr,0,8,4)<<endl;
	cout<<lowerBound(arr,0,8,5)<<endl;
	cout<<lowerBound(arr,0,8,8)<<endl;
	cout<<lowerBound(arr,0,8,7)<<endl;
	cout<<lowerBound(arr,0,8,8)<<endl;
	cout<<lowerBound(arr,0,8,9)<<endl;
	cout<<lowerBound(arr,0,8,10)<<endl;
	cout<<lowerBound(arr,0,8,11)<<endl;
	cout<<lowerBound(arr,0,8,12)<<endl;
	cout<<lowerBound(arr,0,8,13)<<endl;
	cout<<lowerBound(arr,0,8,14)<<endl;
	return 0;
}