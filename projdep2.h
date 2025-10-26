void bench(int cn);

struct numeros{
int num;
};

struct numeros *n;
void quicksort(int cn,int s,int f,int* pq);
void bench(int cn){
	srand(time(NULL));
	unsigned int t0,tb,ts,ti,tq,tsh,t0b,t0s,t0i,t0q,t0sh;
	int i,g;
	int pb=0;
	int ps=0;
	int pi=0;
	int pq=0;
	int psh=0;
	int temp;
	for(i=0;i<cn;i++){
		(n+i)->num=0+rand()%10001;;
		//printf("%d ",(n+i)->num);
	}
//------------------------burbuja------------------------------------------

	for(i=0;i<cn;i++){
		(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n\n\n********************************************************************************************\n");
	t0b=clock();
	for(i=0;i<cn;i++){
		for(g=0;g<cn;g++){
			if((n+i)->num<(n+g)->num){
				temp=(n+i)->num;
				(n+i)->num=(n+g)->num;
				(n+g)->num=temp;
			}
			pb++;
		}
	}
	tb=clock();
	for(i=0;i<cn;i++){
		//(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	double tbf = (double(tb-t0b)/CLOCKS_PER_SEC);
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	printf("al algoritmo burbuja le ha tomado:");
	printf("\n%d pasos",pb);
	printf("\n%.3f segundos",tbf);
	printf("\ncompletar el benchmark");
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	


//------------------------seleccion------------------------------------------

	for(i=0;i<cn;i++){
		(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n\n\n********************************************************************************************\n");
	t0s=clock();
	int m;
	for(i=0;i<cn-1;i++){
		m=i;
		for(g=i+1;g<cn;g++){
			if(((n+m)->num)>((n+g)->num)){
				m=g;
			}
			ps++;
		}
		temp=((n+i)->num);
		((n+i)->num)=((n+m)->num);
		((n+m)->num)=temp;
	}
	ts=clock();
	for(i=0;i<cn;i++){
		//(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	double tsf = (double(ts-t0s)/CLOCKS_PER_SEC);
	printf("al algoritmo seleccion le ha tomado:");
	printf("\n%d pasos",ps);
	printf("\n%.3f segundos",tsf);
	printf("\ncompletar el benchmark");
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	
//------------------------insercion------------------------------------------

	for(i=0;i<cn;i++){
		(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n\n\n********************************************************************************************\n");
	t0i=clock();
	for(i=0;i<cn;i++){
		m=i;
		temp=((n+i)->num);
		while((m>0)&&(((n+m-1)->num)>temp)){
			((n+m)->num)=((n+m-1)->num);
			pi++;
			m--;
		}
		((n+m)->num)=temp;
	}
	ti=clock();
	for(i=0;i<cn;i++){
		//(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	double tif = (double(ti-t0i)/CLOCKS_PER_SEC);
	printf("al algoritmo insercion le ha tomado:");
	printf("\n%d pasos",pi);
	printf("\n%.3f segundos",tif);
	printf("\ncompletar el benchmark");
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");

//------------------------quicksort------------------------------------------
	
	for(i=0;i<cn;i++){
		(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n\n\n********************************************************************************************\n");
	t0q=clock();
	quicksort(cn,0,cn-1,&pq);
	tq=clock();
	for(i=0;i<cn;i++){
		//(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	double tqf = (double(tq-t0q)/CLOCKS_PER_SEC);
	printf("al algoritmo quicksort le ha tomado:");
	printf("\n%d pasos",pq);
	printf("\n%.5f segundos",tqf);
	printf("\ncompletar el benchmark");
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");

//------------------------shell------------------------------------------

	for(i=0;i<cn;i++){
		(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n\n\n********************************************************************************************\n");
	t0sh=clock();
	g=cn;
	bool k;
	while(g>1){
		g=(g/2);
		k=true;
		while(k==true){
			k=false;
			i=0;
			while((i+g)<=cn){
				psh++;
				if((n+i)->num>(n+i+g)->num){
					temp=(n+i)->num;
					(n+i)->num=(n+i+g)->num;
					(n+i+g)->num = temp;
					k=true;
				}
				i++;
			}
		}
	}
	tsh=clock();
	for(i=0;i<cn;i++){
		//(n+i)->num=0+rand()%10001;
		printf("%d ",(n+i)->num);
	}
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	double tshf = (double(tsh-t0sh)/CLOCKS_PER_SEC);
	printf("al algoritmo shell le ha tomado:");
	printf("\n%d pasos",psh);
	printf("\n%.3f segundos",tshf);
	printf("\ncompletar el benchmark");
	printf("\n\n\n-----------------------------------------------------------------------------------------------\n\n\n");
	
	printf("\n\n\n\n\nResultados:");
	printf("\n-----------------------------------------------------------------------------------------------\n");
	printf("Al algoritmo burbuja le ha tomado:");
	printf("\n%d pasos",pb);
	printf("\n%.3f segundos",tbf);
	printf("\ncompletar el benchmark");
	printf("\n-----------------------------------------------------------------------------------------------\n");
	printf("Al algoritmo seleccion le ha tomado:");
	printf("\n%d pasos",ps);
	printf("\n%.3f segundos",tsf);
	printf("\ncompletar el benchmark");
	printf("\n-----------------------------------------------------------------------------------------------\n");
	printf("Al algoritmo insercion le ha tomado:");
	printf("\n%d pasos",pi);
	printf("\n%.3f segundos",tif);
	printf("\ncompletar el benchmark");
	printf("\n-----------------------------------------------------------------------------------------------\n");
	printf("Al algoritmo quicksort le ha tomado:");
	printf("\n%d pasos",pq);
	printf("\n%.5f segundos",tqf);
	printf("\ncompletar el benchmark");
	printf("\n-----------------------------------------------------------------------------------------------\n");
	printf("Al algoritmo shell le ha tomado:");
	printf("\n%d pasos",psh);
	printf("\n%.5f segundos",tshf);
	printf("\ncompletar el benchmark");
	printf("\n-----------------------------------------------------------------------------------------------\n");
}
void quicksort(int cn,int s,int f,int* pqq){
	int p;
	int i;
	int g;
	int temp;
	p=(n+s)->num;
	i=s;
	g=f;
	while(i<g){
		while(((n+i)->num)<=p && i<g){
			i++;
			*pqq=*pqq+1;
		}
		while((n+g)->num>p){
			g--;
			*pqq=*pqq+1;
		}
		if(i<g){
			temp=((n+i)->num);
			((n+i)->num)=((n+g)->num);
			((n+g)->num)=temp;
		}
	}
	(n+s)->num=(n+g)->num;
	(n+g)->num=p;
	if(s<g-1){
		quicksort(cn,s,g-1,pqq);
	}
	if(g+1<f){
		quicksort(cn,g+1,f,pqq);
	}
}
