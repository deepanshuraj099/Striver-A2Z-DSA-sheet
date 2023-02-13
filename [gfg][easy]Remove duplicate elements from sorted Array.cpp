class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0 , j=0;
        for(int k=1 ; k<n ; k++) {
            if(a[k] != a[k-1] ) {
                a[i+1] = a[k];
                i++;
            }
        }
        return i+1;
    }
};