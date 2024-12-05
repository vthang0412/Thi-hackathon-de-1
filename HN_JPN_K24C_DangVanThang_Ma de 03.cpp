#include<stdio.h>

int main(){
	int a[100],n,ans;
	int found_prime;

	while(1){
		printf("                             MENU                          ");
		printf("\n1.Nhap so phan tu va gia tri cho mang.");
		printf("\n2.In ra gia tri cac phan tu trong mang.");
		printf("\n3.Dem so luong cac so nguyen to co trong mang.");
		printf("\n4.Tim gia tri nho thu hai trong mang.");
		printf("\n5.Them mot phan tu vao vi tri ngau nhien trong mang.");
		printf("\n6.Xoa phan tu.");
		printf("\n7.Sap xep mang theo thu tu giam dan.");
		printf("\n8.Tim kiem phan tu do co ton tai trong mang hay khong.");
		printf("\n9.Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co o trong mang.");
		printf("\n10.Dao nguoc thu tu cac phan tu co trong mang.");
		printf("\n11.Thoat chuong trinh.");
		printf("\nLua chon cua ban:");
		scanf("%d",&ans);
		
		switch(ans){
			case 1:{
			printf("Nhap so phan tu:");
				scanf("%d",&n);	
				if (n<=0 || n>100){
					printf("\nPhan tu khong hop le.Nhap lai:");
				}else{
					for (int i=0;i<n;i++){
						printf("\nGia tri cua phan tu thu %d:",i+1);
					    scanf("%d",&a[i]);
				}
				}	
				
			}
				break;	
				
			case 2:{
				if(n<=0){
					printf("\nMang chua duoc nhap.");
				}else{
				
			    printf("\nGia tri cua phan tu trong mang la:");
				for (int i=0;i<n;i++){
					printf("\na[%d]= %d",i,a[i]);
				}
				
		}
				
			}break;
		
			
		case 3:{
		
		
	        if(n <= 0){
		    printf("Mang chua duoc tao \n");
			break;
			}else{
				   printf("Cac so nguyen to trong mang:\n");
   					for (int i = 0; i < n; i++) {
        				int num = a[i];
       					int is_prime = 1;
					        if (num <= 1) {
					            is_prime = 0; 
					        } else {
					            for (int j = 2; j * j <= num; j++) {
					                if (num % j == 0) {
					                    is_prime = 0; 
					                    break;
					                }
					            }
					        }
					
					        if (is_prime) {
					            printf("%d ", num);
					            found_prime=1; 
					        }
	                  }
		                  if (!found_prime) {
		                     printf("\nKhong co so nguyen to trong mang.\n"); 
		                }
					}
					break;
			}
		case 5 :{
			int so , vitri;
			printf("Nhap vao gia tri muon them vao : ");
			scanf("%d",&so);
			printf("Nhap vi tri muon them vao : ");
			scanf("%d",&vitri);
			if(0> vitri || vitri > n){
				printf("Vi tri them vao khong hop le \n");
				break;
				}
			for(int i = n ; i > vitri ; i--){
				a[i] = a[i-1];
				}
			a[vitri] = so;
			n++;
			printf("Mang sau khi them : \n");
			for(int i = 0 ; i < n ; i++){
				printf("%d \t",a[i]);
				}
			break;
		}
		case 6 :{
			int xoa;
			printf("Nhap vi tri muon xoa : ");
			scanf("%d",&xoa);
			if(0 > xoa || xoa > n){
				printf("Vi tri xoa khong hop le \n");
				break;
				}
			for(int i = xoa ; i < n - 1 ; i++){
				a[i] = a[i+1];
				}
			n--;
			printf("Mang sau khi xoa : \n");
			for(int i = 0 ; i < n ; i++){
				printf("%d \t",a[i]);
				}
			break;
		}
		case 7 :{
			for(int i = 0 ; i < n - 1 ; i++){
				int minIndex = i;
				for(int j = i + 1 ; j < n ; j++){
					if(a[j] > a[minIndex]){
		    			j=minIndex;
					}
				}
				int temp = a[minIndex];
				a[minIndex] = a[i];
				a[i] = temp;
			}
			printf("Mang sau khi sap xep la : ");
			for(int i = 0 ; i < n ; i++){
				printf("%d \t",a[i]);
			}
			--n;
			break;
		}
				
				
				
			
		
		
			case 11:
				printf("Thoat chuong trinh.");
					break;
		}	
		
		
		
	}while(ans!=11);
	
	
	
	
	
	return 0;
}
