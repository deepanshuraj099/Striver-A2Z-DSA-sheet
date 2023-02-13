class Solution{   
public:
    int gcd(int a, int b) {
    // gcd(a,b) number of blocks are formed
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    void leftRotate(int arr[], int n, int d) {
	    int i, j, k, temp;
     for (i = 0; i < gcd(d, n); i++) // gcd(d,n) times the loop will iterate
     {
         /* move i-th values of blocks */
         temp = arr[i];
         j = i;
         while (1) {
             k = j + d;
             if (k >= n) // The element has to be shifted to its rotated position
                k = k - n;
             if (k == i) // The element is already in its rotated position
                break;
             arr[j] = arr[k];
             j = k;
         }
         arr[j] = temp;
         }
    }
};