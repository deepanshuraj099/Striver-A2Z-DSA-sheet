void merge(int arr[], int s, int mid, int e)

    {

    int len1=mid-s+1;

    int len2=e-mid;

 

  int *first = new int[len1];

    int *second = new int[len2];

 

 

    int m=s;

    for(int i=0;i<len1;i++)

    {

        first[i]=arr[m++];

    }

 

    m=mid+1;

    for(int j=0;j<len2;j++)

    {

        second[j]=arr[m++];

    }

 

    int i = 0;

    int j = 0;

    m = s;

 

    while(i < len1 && j < len2) {

        if(first[i] < second[j]) {

            arr[m++] = first[i++];

        }

        else{

            arr[m++] = second[j++];

        }

    }   

    while(i < len1) {

        arr[m++] = first[i++];

    }

 

    while(j < len2 ) {

        arr[m++] = second[j++];

    }

 

   

    delete []first;

    delete []second;

    }

    

    void mergeSort(int arr[], int s, int e)

    {

        //code here

        if(s>=e)

    return ;

 

    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);

    mergeSort(arr,mid+1,e);

    merge(arr,s,mid,e);

    }