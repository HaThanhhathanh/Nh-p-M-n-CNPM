#include <stdio.h>
int main(){
	int N;
	int S =0;
	scanf("%d",&N);
	if(N<10){
		for(int i=1;i<=N;i++){
		S+= (10*i + i);
	}
		printf("tong la: %d",S);
} else if(10<=N<100){
	int S1=0;
	int S2=0;
	for(int i=1;i<10;i++){
		S1 += 10*i + i;
	}
	for(int i=10;i<=N;i++){
		S2 += 100*i + i;
}
	S= S1+S2;
	printf("tong la: %d",S);
	return 0;
}
}
