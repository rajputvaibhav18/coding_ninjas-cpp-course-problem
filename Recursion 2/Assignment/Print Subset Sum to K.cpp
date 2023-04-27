/*
Given an array A and an integer K, print all subsets of A which sum to K.
Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output:
3 3
5 1
*/
//void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    #include <vector>

void help(int input[], int size, int k ,vector<int> ans)
{
    if(size==0)
    {
        if(k==0)
        {
            for(int i: ans)
                cout<<i<<" ";
            cout<<endl;
        }
        
        return;
    }
    help(input+1,size-1,k,ans);//not including

    ans.push_back(input[0]);
    
    help(input+1,size-1,k-input[0],ans);// including
                                 
    return;
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    vector<int > ans;
    
    help(input,size,k,ans);
    
}

