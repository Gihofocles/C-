void ni(char* nb,int n,int i){

	if(n>0){
		if(n%2==0){
			nb[i]='0';
		}
		else{
			nb[i]='1';
		}
		n=n/2;
		i--;
		ni(nb,n,i);
	}
}
void ny(char* nb,int* n,int i,bool k,int* ex){
	int g=0;
	int p=0;
	
	if(k==true){
		while(nb[i]!='*'){
			i++;
		}
		i=i-1;
		
		for(g=i-1;g>=0;g--){
			ex[g]=p;
			p++;
		}
		i=0;
		p=0;
		k=false;
	}
	if(nb[i]!='*'){

		if(nb[i]=='1'){
			g=pow(2,ex[i]);
			nb[i]=g;
		}
		else{
			nb[i]=0;
		}

		i++;
		ny(nb,n,i,false,ex);
	}
	else{
		while(nb[p]!='*'){
			*n=nb[p]+*n;
			p++;
		}
	}
}