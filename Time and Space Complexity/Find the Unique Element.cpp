/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
*/
int findUnique(int *arr, int size) {
 int i;
    for( i = 0 ; i < size ; i++){
        bool Return = true;
        for(int j = 0; j < size ; j++){
            if(arr[i]==arr[j]){   //here we can comparing the actual values 
                 if(i!=j){        // and here we comparr address of that values 
                Return = false;
                  break ;
            } }
        }
      if(Return){
           int temp = arr[i];
           return temp ;
    }
       }
        return 0 ;
}

