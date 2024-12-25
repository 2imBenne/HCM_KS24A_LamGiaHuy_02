#include <stdio.h>

int main(){
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE]; 
    int size = 0; 
    int choice; 
	do{
		printf("========== MENU ==========\n") ;
		printf("1.Nhap so phan tu \n");
		printf("2.In phan tu cua mang \n");	
		printf("3.Dem so luong chan le \n") ;
		printf("4.Tim gia tri lon thu 2 co trong mang \n") ;
		printf("5.Them phan tu vao dau mang \n");
		printf("6.Xoa phan tu trong mang \n");
		printf("7.Sap xep thu tu giam dan(Insertion sort)  \n");
		printf("8.Tim kiem phan tu co trong mang(Binary search)  \n");
		printf("9.In toan bo so nguyen to co trong mang da duoc binh phuong \n");
		printf("10.Sap xep theo thu tu giam dan(Bubble sort) \n") ; 
		printf("11.Thoat \n"); 
		
		printf("Moi nhap chuc nang mong muon: ") ;
		scanf("%d",&choice); 
		 
		 switch(choice){
		case 1 : //nhap so phan tu va gia tri cho mang 
		int n ;
            printf("Hay nhap so luong phan tu mang :");
            scanf("%d", &n);
            if (n<=0 || n>MAX_SIZE){
                printf("Gia tri nhap vao ko hop le");
                break;
            }
            
                for (int i = 0; i < n; ++i) {
                    printf("Nhap Arr[%d] = ",i+1);
                    scanf("%d", arr+i);
                }
                size = n; 
                break;
		
		case 2: //In ra phan tu cua mang
                if(size == 0){
                    printf("Mang rong roi \n");
                    break;
                }
                printf("Cac phan tu trong mang la : \n");
                for (int i = 0; i < size; ++i) {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
		
		case 3: //Dem so luong chan le
		int even,odd; 
		for(int i=0;i<size;i++){
			if(arr[i] % 2 == 0){
				even++ ; 
			} 
			else{
				odd++; 
			} 
		} 
		printf("Trong mang co %d phan tu chan va %d phan tu le ",even,odd) ;
		break;
		
		//case 4: //Tim gia tri lon thu hai co trong mang
		
		//case 5: //Them phan tu vao dau mang
		
		case 6://Xoa phan tu tai vi tri cu the 
		int deleteIndex;
                printf("Hay nhap vi tri can xoa:");
                scanf("%d", &deleteIndex);
                if(deleteIndex <0 || deleteIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    // 1,2,3,4,5
                    for (int i = deleteIndex; i < size-1; ++i) {
                        arr[i] = arr[i+1];
                    }
                    size--;
                    printf("Mang da duoc lam moi thanh cong \n");
                }
                break;
                
		
		//case 7: //sap xep thu tu giam dan (Insert sort)
		
		//case 8://Tim kiem (Binary search) 
		int searchValue ;
		
	}
	} while(choice!=11);
	
		
		 
		
		
		
	 
} 
