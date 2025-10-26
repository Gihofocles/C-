void ni(int* n,int l,int i){
	int t;
	int g;

	
	if(i<l){
		
		for(g=0;g<l-1;g++){
			if(n[g]>n[g+1])							
			{											
				t=n[g];
				n[g]=n[g+1];
				n[g+1]=t;
			}
		}
	i++;	
		ni(n,l,i);
	}
	else{

	}
}