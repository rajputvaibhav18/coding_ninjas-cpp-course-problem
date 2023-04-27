/*

Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
*/
void mergeAlgorithams(int input[] , int start1 , int mid , int end ){
    int just[end - start1+1];
    int i = 0 ,  mid1 = mid+1 , start= start1; 
    
   while(start<= mid && mid1 <= end ){
        if(input[start]<=input[mid1]){
            just[i++]=input[start++];
        }
        else
            just[i++]=input[mid1++];
       }
    while(start<=mid){
        just[i++]=input[start++];
    }
    
    while(mid1<=end){
          just[i++]=input[mid1++];}
    
    int j= 0 ;
    for(int i = start1 ; i <= end; i++){
        input[i]=just[j++];
    }
}

void mergeSort(int input[] , int start, int end ){
    if(start < end){
        int  mid = (start+end)/2;
        mergeSort(input , start , mid);
        mergeSort(input , mid+1 , end );
        mergeAlgorithams(input , start , mid , end );
    }
    else 
        return ;
}

void mergeSort(int input[], int size){
    if(size==0)
        return ;
    else 
        mergeSort(input , 0 , size-1);
}
