/*
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.

Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8

*/
int partition(int input[] , int start , int end ){
    int pivot = input[start];
    int i = start;
    int j = end ;
      
     while(i < j){
         while(pivot >= input[i])
             i++;
         
         while(pivot < input[j])
                j--;
         
         if(i<j){
             int temp = input[i];
             input[i]=input[j];
             input[j]=temp ;
         }
     }
        int temp = input[start];
         input[start]=input[j];
         input[j]=temp;
    return j;
}

	void quickSort(int input[], int start, int end)
	{
           
        if(start>end)
            return ;
        
        int mid = partition(input, start , end );
    	quickSort(input, start , mid-1);
        quickSort(input, mid+1, end);
	}
	
void quickSort(int input[], int size) {
    if(size==0)
        return ;
    
    quickSort(input , 0 , size-1  );
}
