class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int minIndex = 0;
        for(int j=0; j<i; j++) {
            minIndex =j;
            for(int k=j; k<i; k++) {
                if(arr[minIndex] > arr[k]) minIndex = k;
            }
            swap(arr[minIndex],arr[j]);
        }
        return 0;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       select(arr,n);
    }
};