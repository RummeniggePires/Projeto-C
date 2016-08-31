 
#include <iostream>

using namespace std;

int *comparavet(int *s1, int *s2, int t01, int t02, int *t03){
	int sev = 0;
	int *vet = new int [*t03];
		
		for (int i=0;i < t01;i++){
		
			for (int j=0;j < t02;j++){
			
				if (*(s1+i)==*(s2+j)){
				
					*(vet+sev)=*(s2+j);
					sev++;	
									
				}
			
			}	
		
		}

	*t03 = sev;
	return vet;
}

int main(int argc, char** argv){
	int n1,n2,n3,*s3;
	
	cout<< "\nDigite o tamanho de s1 : ";
	cin >> n1;
	int *s1 = new int [n1];
	
	cout<< "\nDigite o tamanho de s2 : ";
	cin >> n2;
	int *s2 = new int [n2];
	
	cout << "\nDigite o S1\n";
	for (int i=0;i < n1;i++){
		
		cout << i+1 <<" : ";
		cin >> *(s1+i);
		
	}
	
	cout << "\nDigite o S2\n";
	for (int i=0;i < n2;i++){
		
		cout << i+1 <<" : ";
		cin >> *(s2+i);
		
	}
	
	if (n1>n2){
		n3 = n1;
	}else{
		n3 = n2;
	}
	
	s3 = comparavet(s1,s2,n1,n2,&n3);
	
	cout << "\n\nExibindo S3: \n";
	for (int i=0;i<n3;i++){
		cout << i+1 << " : " <<*(s3+i)<<endl;
	}	
}
