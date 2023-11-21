#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){	
	int numbers [100];
	int currentIndex = 0;
	int size;
	int sumnumbers;
	int min,max;
	int findnumber;
	int cntnumber;
	int addindex;
	int addvalue;
	do {
		printf("*********************MENU********************\n");
		printf("1. Nhap gia tri n phan tu cua mang\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
		printf("4. In ra cac gia tri nho nhat va lon nhat trong mang\n");
		printf("5. Su dung thuat toan sap xep chen sap xep mang tang dan\n");
		printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
		printf("7. Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan,cac pha tu chan chia het cho 5o cuoi mang theo thu tu tang dan,cac phan tu con lai o giua mang theo thu tu giam dan\n");
		printf("8. Nhap gia tri m tu ban phim, chen gia tri vao mang dung vi tri\n");
		printf("9. Thoat\n");
		printf("lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap vao so phan tu cua mang:");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					printf("numbers[%d]=",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("gia tri cac phan tu trong mang:");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");	
				break;
		
		
			case 3:
			sumnumbers=0;
			printf("cac phan tu chia het cho 2 va 3 trong mang : \n");
			for(int i=0;i<currentIndex;i++){
					if(numbers[i]%2==0 && numbers[i]%3==0){
						printf("%d\t",numbers[i]);
						sumnumbers+=numbers[i];
					}
				}
				printf("\nTong cac phan tu chia het cho 2 va 3 trong mang: %d\n",sumnumbers);
			
			break;
			case 4:
				min = numbers[0];
				max = numbers[0];
				for(int i=1;i<currentIndex;i++){
					if(min>numbers[i]){
						min = numbers[i];
					}
					if(max<numbers[i]){
						max = numbers[i];
					}
				}
				printf("Gia tri lon nhat: %d - Gia tri nho nhat: %d\n",max,min);
				break;
			case 5:
				break;	
			case 6:
				sumnumbers = 0;
				printf("Cac so nguyen to trong mang: ");
				for(int i=0;i<currentIndex;i++){
					int isPrime = 0;
					if(numbers[i]>=2){
						for(int j=2;j<=sqrt(numbers[i]);j++){
							if(numbers[i]%j==0){
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime=1;
					}
					if(isPrime==0){
						
						printf("%d\t",numbers[i]);
						sumnumbers+=numbers[i];
					}
				}
				printf("\nTong cac so nguyen to la: %d\n",sumnumbers);
				break;
				
			case 7:
				printf("Nhap vao gia tri can them trong mang:");
				scanf("%d",&addvalue);
				printf("Nhap vao chi so can chen vao mang:");
				scanf("%d",&addindex);
				if(addindex<0||addindex>=99){
					printf("Khong the chen phan tu vao chi so %d\n",addindex);
				}else{
					if(addindex==currentIndex){
						numbers[currentIndex] = addvalue;
						currentIndex++;
					}else if(addindex>currentIndex){
						
						for(int i=currentIndex;i<addindex;i++){
							numbers[i] = 0;
						}
						
						numbers[addindex] = addvalue;
						
						currentIndex = addindex+1;
					}else{
						
						for(int i=currentIndex;i>addindex;i--){
							numbers[i] = numbers[i-1];
						}
						
						currentIndex++;
						
						numbers[addindex] = addvalue;
					}
				}
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf(" vui long nhap tu 1 den 9 ");			
				}		
	}while(1==1);
}


