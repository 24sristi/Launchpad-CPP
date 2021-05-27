/* 
Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

Hint - Think Binary Search!

Input Format
The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.

Constraints
Output Format
Output the index of number in the array to be searched. Output -1 if the number is not found.

Sample Input
5
4
5
1
2
3
2
Sample Output
3
*/

#include<bits/stdc++.h>
using namespace std;

int Rotated_Binary_search(int a[], int n, int key)
{
    int s=0;
    int l=n-1;
    while(s<=l)
    {
        int mid=(s+l)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[s]<=a[mid])//part1 (2 cases, lies in left)
        {
            if(key>=a[s] && key<=a[mid])
            {
                l=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else if(a[mid]<=a[l])//part2
        {
            if(key>=a[mid] && key<=a[l])
            {
                s=mid+1;
            }
            else
            {
                l=mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<Rotated_Binary_search(arr, n, key);

}