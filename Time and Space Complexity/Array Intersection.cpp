/*
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10
Sample Output 1 :
2 3 4
10
*/

void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    
    int i = 0;
    int j = 0;
    
    for(; i < n and j < m;) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] <<  " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    cout << endl;
}
