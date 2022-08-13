#include <stdio.h>
int main(){
	//宣告
	int i,j,k,year=1924;
	char tian[10][3]  ={"甲", "乙", "丙","丁","戊","己","庚","辛","壬","癸"};
	char di[12][3]  ={"子", "丑", "寅","卯","辰","巳","午","未","申","酉","戌","亥"};
	for(i=0; i<60; i++){
		j = i%10;
		k = i%12;
		printf("%d:%s%s, ",year++, tian[j],di[k]);
	}
	return 0;
}
