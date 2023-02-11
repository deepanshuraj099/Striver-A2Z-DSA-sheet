class Solution
{
    public:
    void swap(int &a, int &b) {
        int temp = a;
        a =b;
        b= temp;
    }
    void insert(int arr[], int i)
    {
        //code here
        for(int j=1 ; j<i ; j++) {
            int k=j;
            while(k>=1 && arr[k] < arr[k-1]) {
                swap(arr[k], arr[k-1]);
                k--;
            }
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        insert(arr,n);
    }
};