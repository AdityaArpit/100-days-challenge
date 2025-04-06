void printarr(int*,int);//done
void scanarr(int*,int);//done
void revarr(int*,int);//done
void accarr(int*,int);//done
void desarr(int*,int);//done
void swaparrpos(int*,int,int,int);//done
void swap(int,int);//done

void print2Darr(int**,int,int);//done
void scan2Darrk(int**,int,int);//done
int det(int**,int );//done

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
}

void revarr(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

void accarr(int arr[],int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }    
}

void scanarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("enter value %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    
}

void swaparrpos(int arr[],int n,int a,int b){
    int temp=0;
    if(a>n||b>n){
        printf("Values can't be swapped\n");
    }
    else{
        temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
}

void desarr(int arr[],int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(arr[j]<arr[j+1]){
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }    
}

void print2Darr(int arr[][],int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t");
        }
        printf("\n");      
    }
}

void scan2Darr(int arr[][],int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",arr[i][j]);
        }    
    }
}

int det(int arr[][],int n){
    int d=0;
    for(int i = 0; i < n; i++)
    {
        d+=arr[0][i]*((arr[1][(i+1)%3]*arr[2][(i+2)%3])-(arr[1][(i+2)%3]*arr[2][(i+1)%3]));
    }
    return d;
}