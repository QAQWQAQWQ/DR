#include<bits/stdc++.h>
using namespace std;
inline int read(){
	int sum=0,fh=1;
	char c=getchar();
	while(c>'9'||c<'0'){
		if(c=='-')fh=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		sum*=10;
		sum+=c-'0';
		c=getchar();
	}
	return sum*fh;
}
void listfiles(const char *dir){
	intptr_t handle;
	_finddata_t findata;
	handle = _findfirst(dir,&findata);
	//cout<<handle<<endl<<dir<<endl;
	if(handle==-1)return ;
	do{
		//cout<<findata.name<<endl;
		freopen(findata.name,"r",stdin);
        cout<<findata.name[0]<<findata.name[1]<<findata.name[2]<<" = {\n";
        read();read();
        double r=read(),g=read(),b=read();
        r/=255;g/=255;b/=255;
        printf("   set_variable = { color_r = %.2lf }\n",r);
        printf("   set_variable = { color_g = %.2lf }\n",g);
        printf("   set_variable = { color_b = %.2lf }\n",b);
        cout<<"}\n";
		fclose(stdin);
	}while(_findnext(handle,&findata)==0);
	_findclose(handle);
	return ;
}
int main(){
//    freopen(".in","r",stdin);
	char dir[200]="";
	//cin.getline(dir,200);
    freopen("test.out","w",stdout);
	strcat(dir,"*.txt");
	listfiles(dir);
//	  fclose(stdin);
    fclose(stdout);
	return 0;
}
