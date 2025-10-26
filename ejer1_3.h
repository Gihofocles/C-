
void ordb(int* v,int t);
void ords(int* v,int t);

void ordb(int* v,int t){
	int i,g,temp;
	int pb=0;
	for(i=0;i<t;i++){
		for(g=0;g<t;g++){
			if(v[i]>v[g]){
				temp=v[i];
				v[i]=v[g];
				v[g]=temp;
			}
			pb++;
		}
	}

	for(i=0;i<t;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
	printf("burbuja: %d pasos",pb);
}

void ords(int* v,int t){
	int i,g,temp,m;
	int ps=0;

    for (i=0;i<t;i++){
		m=i;
		for(g=i+1;g<t;g++){
			if(v[g]>v[m]){
				m=g;
			}
			ps++;
		}
		temp=v[i];
		v[i]=v[m];
		v[m]=temp;
	}
	printf("\n");
	for(i=0;i<t;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
	printf("seleccion: %d pasos",ps);
}
