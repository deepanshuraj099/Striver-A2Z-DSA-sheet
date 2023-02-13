class Solution{
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   int temp[n];
        for(int i=0;i<n;i++){ 
            swap(arr[(i+k)%n], arr[i]);
        }
        for(int i=0;i<n;i++){
            arr[i] = temp[(i+k)%n];
        }
	}
};