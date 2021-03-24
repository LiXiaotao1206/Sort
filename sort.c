
/*
 * 快速排序
 */
void quickSort(int a[], const unsigned int len){
	unsigned int i,j;
	int base;
	if(len<1){
		return;
	}
	base = a[0];
	i = 0;
	j = len-1;

	while(i<j){
		while(i<j && a[j]>base){
			j--;
		}
		if(i<j){
			a[i] = a[j];
			i++;
		}
		while(i<j && a[i]<base){
			i++;
		}
		if(i<j){
			a[j] = a[i];
			j--;
		}
	}
	a[i] = base;

	if(i>1){
		quickSort(a,i);
	}
	if(len-i-1>1){
		quickSort(a+i+1,len-i-1);
	}
}

/*
 * 冒泡排序
 */
void bubbleSort(int a[], const unsigned int len){
	unsigned int i,j;
	int tmp;
	if(len<1){
		return;
	}
	for(i=0;i<len-1;i++){
		for(j=0;j<len-i-1;j++){
			if(a[j]>a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = a[j];
			}
		}
	}
}

/*
 * 选择排序
 */
void selectSort(int a[], const unsigned int len){
	unsigned int i,j,index;
	int tmp;
	if(len<1){
		return;
	}
	for(i=0;i<len-1;i++){
		index = i;
		for(j=i+1;j<len;j++){
			if(a[index]>a[j]){
				index = j;
			}
		}
		tmp = a[i];
		a[i] = a[index];
		a[index] = tmp;
	}
}

/*
 * 直接插入排序
 */
void directInsertSort(int a[], const unsigned int len){

	unsigned int i,j,index;
	int tmp;
	if(len<1){
		return;
	}
	for(i=1;i<len;i++){
		j=i;
		while(j>0 && a[j]<a[j-1]){
			tmp = a[j];
			a[j] = a[j-1];
			a[j-1] = tmp;
			j--;
		}
	}
}




