#include <stdio.h>
int main(){
	//�ŧi
	int i,j,k,year=1924;
	char tian[10][3]  ={"��", "�A", "��","�B","��","�v","��","��","��","��"};
	char di[12][3]  ={"�l", "��", "�G","�f","��","�x","��","��","��","��","��","��"};
	for(i=0; i<60; i++){
		j = i%10;
		k = i%12;
		printf("%d:%s%s, ",year++, tian[j],di[k]);
	}
	return 0;
}
