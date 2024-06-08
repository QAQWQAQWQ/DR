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
		string str1=findata.name,str2="";
		int len=str1.size();
		for(int i=0;i<len;i++)if(str1[i]=='.')break;
		else str2+=str1[i]; 
		cout<<"spriteType = {"<<endl;
		cout<<"name = \"GFX_"<<str2<<"_shine\""<<endl;
		cout<<"texturefile = \"";
		char cwd[250];_getcwd(cwd,250);
		string str3="";
		bool flg=false;
		for(int i=0;i<250;i++){
			if(cwd[i]==0)break;
			if(cwd[i]=='g'&&cwd[i+1]=='f'&&cwd[i+2]=='x')flg=true; 
			if(flg)str3+=cwd[i];
		} 
		cout<<str3<<"/";
		cout<<str1<<"\""<<endl;
		cout<<"effectFile = \"gfx/FX/buttonstate.lua\""<<endl;
		cout<<"animation = {"<<endl;
		cout<<"	animationmaskfile = "<<"\""<<str3<<"/"<<str1<<"\""<<endl;			
		cout<<"	animationtexturefile = \"gfx/interface/goals/shine_overlay.dds\" 	# <- the animated file"<<endl;
		cout<<"	animationrotation = -90.0		# -90 clockwise 90 counterclockwise(by default)"<<endl;
		cout<<"	animationlooping = no			# yes or no ;)"<<endl;
		cout<<"	animationtime = 0.75				# in seconds"<<endl;
		cout<<"	animationdelay = 0			# in seconds"<<endl;
		cout<<"	animationblendmode = \"add\"       #add, multiply, overlay"<<endl;
		cout<<"	animationtype = \"scrolling\"      #scrolling, rotating, pulsing"<<endl;
		cout<<"	animationrotationoffset = { x = 0.0 y = 0.0 }"<<endl;
		cout<<"	animationtexturescale = { x = 1.0 y = 1.0 } "<<endl;
		cout<<"}"<<endl;
	
		cout<<"animation = {"<<endl;
		cout<<"	animationmaskfile = "<<"\""<<str3<<"/"<<str1<<"\""<<endl;			
		cout<<"	animationtexturefile = \"gfx/interface/goals/shine_overlay.dds\" 	# <- the animated file"<<endl;
		cout<<"	animationrotation = 90.0		# -90 clockwise 90 counterclockwise(by default)"<<endl;
		cout<<"	animationlooping = no			# yes or no ;)"<<endl;
		cout<<"	animationtime = 0.75				# in seconds"<<endl;
		cout<<"	animationdelay = 0			# in seconds"<<endl;
		cout<<"	animationblendmode = \"add\"       #add, multiply, overlay"<<endl;
		cout<<"	animationtype = \"scrolling\"      #scrolling, rotating, pulsing"<<endl;
		cout<<"	animationrotationoffset = { x = 0.0 y = 0.0 }"<<endl;
		cout<<"	animationtexturescale = { x = 1.0 y = 1.0 } "<<endl;
		cout<<"}"<<endl;
		cout<<"legacy_lazy_load = no"<<endl;
		cout<<"}"<<endl;
	}while(_findnext(handle,&findata)==0);
	_findclose(handle);
	return ;
}
int main(){
//    freopen(".in","r",stdin);
	char dir0[200]="";
	char dir1[200]="";
	char dir2[200]="";
	char dir3[200]="";
	//cin.getline(dir,200);
    freopen("test_shine.out","w",stdout);
    cout<<"spriteTypes = {"<<endl;
	strcat(dir0,"*.dds");
	listfiles(dir0);
	strcat(dir1,"*.tga");
	listfiles(dir1);
	strcat(dir2,"*.jpg");
	listfiles(dir2);
	strcat(dir3,"*.png");
	listfiles(dir3);
    cout<<"}"<<endl;
//	  fclose(stdin);
    fclose(stdout);
	return 0;
}
