#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;

int chararraytoint(char *arr){
	int value,i,r;
	for(i=0;i<strlen(arr);++i){
		r=arr[i]-'0';
		value=value*10+r;
	}
	return value;
}

class Person{
	
	protected:
		string name;
	    int cnic;
	
	public:
		
	    void setName(string name){
			this->name=name;
		}
		
		string getName(void){
			return name;
		}
		
		void setCnic(int cnic){
			this->cnic=cnic;
		}
		
		int getCnic(void){
			return cnic;
		}
		
		Person(){
		};
		
		friend class Person;
		
		
	
	
};

class Batter:virtual public Person{
	
	protected:
		
	int truns1;
	int tballs1;
	int runs1;
	int balls1;
	int tfour1;
	int tsixes1;
	int four1;
	int sixes1;
	int tdot1;
	int dot1;
	float strikerate;
	float tstrikerate;
	int centuries;
	int fifties;
	
	public:
		
		float calculateStrikeRate(void){
			strikerate = (runs1/balls1)*100;
			return strikerate;
		}
		
		float calculatetStrikeRate(void){
			tstrikerate = (truns1/tballs1)*100;
			return tstrikerate;
		}
		
		void setTruns1(int truns1){
			this->truns1=truns1;
		}
		
		int getTruns1(void){
			return truns1;
		}
		
		void setTballs1(int tballs1){
			this->tballs1=tballs1;
		}
		
		int getTballs1(void){
			return tballs1;
		}
		
		void setTfour1(int tfour1){
			this->tfour1=tfour1;
		}
		
		int getTfour1(void){
			return tfour1;
		}
		
		void setTsixes1(int tsixes1){
			this->tsixes1=tsixes1;
		}
		
		int getTsixes1(void){
			return tsixes1;
		}
		
		void setTdot1(int tdot1){
			this->tdot1=tdot1;
		}
		
		int getTdot1(void){
			return tdot1;
		}
		
		void setFifties(int fifties){
			this->fifties=fifties;
		}
		
		int getFifties(void){
			return fifties;
		}
		
		void setCenturies(int centuries){
			this->centuries=centuries;
		}
		
		int getCenturies(void){
			return centuries;
		}
		
		void setRuns1(int a){
			runs1=a+runs1;
		}
		
		void setBalls1(int a){
			balls1=a+balls1;
		}
		
		void setFour1(int a){
			four1=four1+a;
		}
		
		void setSixes1(int a){
			sixes1=sixes1+a;
		}
		void setDot1(int a){
			dot1=dot1+a;
		}
		
		int getRuns1(void){
			return runs1;
		}
		
		int getBalls1(void){
			return balls1;
		}
		
		int getFour1(void){
			return four1;
		}
		
		int  getSixes1(void){
			return sixes1;
		}
		int getDot1(void){
			return dot1;
		}
		
		friend class Player;
		
		Batter():Person(){
			runs1=0;
			balls1=0;
			sixes1=0;
			four1=0;
			dot1=0;
		}
		
		void update(void){
			runs1=0;
			balls1=0;
			four1=0;
			sixes1=0;
			dot1=0;
		}
	
};

class Bowler:virtual public Person{
	
	protected:
		
	int truns2;
	int tballs2;
	int runs2;
	int balls2;
	int tfour2;
	int tsixes2;
	int four2;
	int sixes2;
	int tdot2;
	int dot2;
	int twide;
	int tnoball;
	int wide;
	int noball;
	int twickets;
	int wickets;
	float economy;
	float teconomy;
	
	public:
		
	   float calculateEconomy(void){
		   economy = (runs2/balls2)*6;
		   return economy;
	   }
	
	   float calculatetEconomy(void){
		   teconomy = (truns2/tballs2)*6;
		   return economy;
	   }
	   
	   	void setTruns2(int truns2){
			this->truns2=truns2;
		}
		
		int getTruns2(void){
			return truns2;
		}
		
		void setTballs2(int tballs2){
			this->tballs2=tballs2;
		}
		
		int getTballs2(void){
			return tballs2;
		}
		
		void setTfour2(int tfour2){
			this->tfour2=tfour2;
		}
		
		int getTfour2(void){
			return tfour2;
		}
		
		void setTsixes2(int tsixes2){
			this->tsixes2=tsixes2;
		}
		
		int getTsixes2(void){
			return tsixes2;
		}
		
		void setTdot2(int tdot2){
			this->tdot2=tdot2;
		}
		
		int getTdot2(void){
			return tdot2;
		}
		
		void setTwide(int twide){
			this->twide=twide;
		}
		
		int getTwide(void){
			return twide;
		}
		
		void setTnoball(int tnoball){
			this->tnoball=tnoball;
		}
		
		int getTnoball(void){
			return tnoball;
		}
		
		void setTwickets(int twickets){
			this->twickets=twickets;
		}
		
		int getTwickets(void){
			return twickets;
		}
		
		void setBalls2(int a){
			balls2=balls2+a;
		}
		
		void setRuns2(int a){
			runs2=runs2+a;
		}
		
		void setFour2(int a){
			four2=a+four2;
		}
		
		void setSixes2(int a){
			sixes2=a+sixes2;
		}
		
		void setWide(int a){
			wide=wide+a;
		}
		
		void setNoball(int a){
			noball=a+noball;
		}
		
		void setWickets(int a){
			wickets=a+wickets;
		}
		
		int getBalls2(void){
			return balls2;
		}
		
		int getRuns2(void){
			return runs2;
		}
		
		int getFour2(void){
			return four2;
		}
		
		int  getSixes2(void){
			return sixes2;
		}
		
		int getWide(void){
			return wide;
		}
		
		int getNoball(void){
			return noball;
		}
		
		int getWickets(void){
			return wickets;
		}
		
		friend class Player;
		
		
		Bowler(void):Person(){
			runs2=0;
			balls2=0;
			four2=0;
			sixes2=0;
			dot2=0;
			wide=0;
			noball=0;
			wickets=0;
		}	
		
		void update(void){
			runs2=0;
			balls2=0;
			four2=0;
			sixes2=0;
			wide=0;
			noball=0;
			wickets=0;
		}
		
	
};

class Player:public Bowler,public Batter{
	
	int matches;
	
	public:
		
		void setMatches(int matches){
			this->matches=matches;
		}
		
		int getMatches(void){
			return matches;
		}
		
		void update( Batter a){
			truns1 = truns1 + a.runs1;
			tballs1 = tballs1 + a.balls1;
			runs1 = runs1 + a.runs1;
			balls1 = balls1 + a.balls1;
			tfour1 = tfour1 + a.four1;
			tsixes1 = tsixes1 + a.sixes1;
			four1 = four1 + a.four1;
			sixes1 = sixes1 + a.sixes1;
			tdot1 = tdot1 + a.dot1;
			dot1 = dot1 + a.dot1;
			
			
		}
		
		void update( Bowler a){
			truns2 = truns2 + a.runs2;
			tballs2 = tballs2 + a.balls2;
			runs2 = runs2 + a.runs2;
			balls2 = balls2 + a.balls2;
			tfour2 = tfour2 + a.four2;
			tsixes2 = tsixes2 + a.sixes2;
			four2 = four2 + a.four2;
			sixes2 = sixes2 + a.sixes2;
			tdot2 = tdot2 + a.dot2;
			dot2 = dot2 + a.dot2;
			wide = wide + a.wide;
			twide = twide + a.wide;
			noball = noball + a.noball;
			tnoball = tnoball + a.noball;
			wickets = wickets + a.wickets;
			twickets = twickets + a.wickets;
			

		}
		
		Player():Bowler(),Batter(){
		}
		
//		void operator =(Player obj){
//			Player temp;
//			
//			temp.Person::name=Person::name;
//			temp.Person()::cnic=Person::cnic;
//			temp.balls1=balls1;
//			temp.balls2=balls2;
//			temp.centuries=centuries;
//			temp.dot1=dot1;
//			temp.dot2=dot2;
//			temp.fifties=fifties;
//			temp.four1=four1;
//			temp.four2=four2;
//			temp.matches=matches;
//			temp.noball=noball;
//			temp.runs1=runs1;
//			temp.runs2=runs2;
//			temp.sixes1=sixes1;
//			temp.sixes2=sixes2;
//			temp.tballs1=tballs1;
//			temp.tballs2=tballs2;
//			temp.tdot1=tdot1;
//			temp.tdot2=tdot2;
//			temp.tfour1=tfour1;
//			temp.tfour2=tfour2;
//			temp.tnoball=tnoball;
//			temp.truns1=truns1;
//			temp.truns2=truns2;
//			temp.tsixes1=tsixes1;
//			temp.tsixes2=tsixes2;
//			temp.twickets=twickets;
//			temp.twide=twide;
//		}	

	
};

class Team{
	
	string name;
	int runScore;
	int wicketsFall;
	int p;
	Player obj[11];
	
	public:
		
		void setName(string a){
		     name=a;
		}
		string getName(void){
			return name;
		}
		void setP(int a){
			p=a;
		}

};









void insertPlayer(void){
	
	fstream player;
	char chname[25];
	char chcnic[25];
	char chmatches[25];
	char chtruns1[25];
	char chtballs1[25];
	char chtfour1[25];
	char chtsixes1[25];
	char chtdot1[25];
	char chcenturies[25];
	char chfifties[25];
	char chtruns2[25];
	char chtballs2[25];
	char chtfour2[25];
	char chtsixes2[25];
	char chtdot2[25];
	char chtwide[25];
	char chtnoball[25];
	char chwickets[25];
	
	        cin.ignore();
			cout<<"Enter the name of player:\t";
			cin.getline(chname,25);
			q:
			cout<<"Enter the CNIC number of player:\t";
			cin.getline(chcnic,25);
			if(strlen(chcnic)>4){
		          cout<<"Too much lenghty CNIC number\n";
		          goto q;
	        }
	        cout<<"Enter the number of matches this player played:\t";
	        cin.getline(chmatches,25);
			cout<<"Enter the runs made by this batter in whole career:\t";
			cin.getline(chtruns1,25);
			cout<<"Enter the numbers of balls played by this batter in his whole career:\t";
			cin.getline(chtballs1,25);
			cout<<"Enter the number of fours this batter hit in his whole career:\t";
			cin.getline(chtfour1,25);
			cout<<"Enter the number of sixes this batter hit in his whole career:\t";
			cin.getline(chtsixes1,25);
			cout<<"Enter the number of dot balls this batter played in his whole career:\t";
			cin.getline(chtdot1,25);
			cout<<"Enter the number of centuries of this batter:\t";
			cin.getline(chcenturies,25);
			cout<<"Enter the number of fifties of this batter:\t";
			cin.getline(chfifties,25);
			cout<<"Enter the runs came in this bowler's whole career:\t";
			cin.getline(chtruns2,25);
			cout<<"Enter the numbers of balls he played in his whole career:\t";
			cin.getline(chtballs2,25);
			cout<<"Enter the number of fours came in this bowler's overs in his whole career:\t";
			cin.getline(chtfour2,25);
			cout<<"Enter the number of sixes came in this bowler's overs in his whole career:\t";
			cin.getline(chtsixes2,25);
			cout<<"Enter the number of dot balls came in this bowler's whole career:\t";
			cin.getline(chtdot2,25);
			cout<<"Enter the number of wide balls this bowler done in his whole career:\t";
			cin.getline(chtwide,25);
			cout<<"Enter the number of noballs this bowler done in his whole career:\t";
			cin.getline(chtnoball,25);
			cout<<"Enter the number of wickets:\t";
			cin.getline(chwickets,25);			
			
	player.open("Player.txt",ios::app);
	player<< chname<<'|'<<chcnic<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';
	cout<<"Data of this player has been successfully entered......\n";		
	player.close();		
	
}

void searchPlayer(void){
	
	fstream player;
	player.open("Player.txt",ios::in);
	char chname[25];
	char chcnic[25];
	char chmatches[25];
	char chtruns1[25];
	char chtballs1[25];
	char chtfour1[25];
	char chtsixes1[25];
	char chtdot1[25];
	char chcenturies[25];
	char chfifties[25];
	char chtruns2[25];
	char chtballs2[25];
	char chtfour2[25];
	char chtsixes2[25];
	char chtdot2[25];
	char chtwide[25];
	char chtnoball[25];
	char chwickets[25];
	
	string name;
	int cnic;
	int matches;
	int truns1;
	int tballs1;
	int tfour1;
	int tsixes1;
	int tdot1;
	int centuries;
	int fifties;
	int truns2;
	int tballs2;
	int tfour2;
	int tsixes2;
	int tdot2;
	int twide;
	int tnoball;
	int wickets;
	char a[25];
	
	cout<<"\nEnter the CNIC of player to search:\t";
	cin.ignore();
	cin.getline(a,25);
	int x=0;
	
	
	cout<<"\n\n"
	    <<left
		<<setw(22)
		<<"NAME:"
		<<left
		<<setw(10)
		<<"MATCHES:"
		<<left
		<<setw(6)
		<<"RUNS:"
		<<left
		<<setw(6)
		<<"AVG:"
		<<left
		<<setw(7)
		<<"BALLS:"
		<<left
		<<setw(4)
		<<"4s:"
		<<left
		<<setw(4)
		<<"6s"
		<<left
		<<setw(6)
		<<"Dots:"
		<<left
		<<setw(6)
		<<"50s:"
		<<left
		<<setw(6)
		<<"100s:"
		<<left
		<<setw(6)
		<<"SR:"
		<<left
		<<setw(12)
		<<"Run(bowl)"
		<<left
		<<setw(12)
		<<"Ball(bowl)"
		<<left
		<<setw(4)
		<<"4s:"
		<<left
		<<setw(4)
		<<"6s:"
		<<left
		<<setw(12)
		<<"Dots(ball)"
		<<left
		<<setw(7)
		<<"Wide"
		<<left
		<<setw(9)
		<<"NoBalls"
		<<left
		<<setw(7)
		<<"Wick:"
		<<left
		<<setw(6)
		<<"Econ:";
		
	
	while(!player.eof()){
		player.getline(chname,25,'|');
		name = chname;
		player.getline(chcnic,25,'|');
		cnic=chararraytoint(chcnic);
		player.getline(chmatches,25,'|');
		matches = chararraytoint(chmatches);
		player.getline(chtruns1,25,'|');
		truns1=chararraytoint(chtruns1);
		player.getline(chtballs1,25,'|');
		tballs1=chararraytoint(chtballs1);
		player.getline(chtfour1,25,'|');
		tfour1=chararraytoint(chtfour1);
		player.getline(chtsixes1,25,'|');
		tsixes1=chararraytoint(chtsixes1);
		player.getline(chtdot1,25,'|');
		tdot1=chararraytoint(chtdot1);
		player.getline(chcenturies,25,'|');
		centuries=chararraytoint(chcenturies);
		player.getline(chfifties,25,'|');
		fifties=chararraytoint(chfifties);
		player.getline(chtruns2,25,'|');
		truns2=chararraytoint(chtruns2);
		player.getline(chtballs2,25,'|');
		tballs2=chararraytoint(chtballs2);
		player.getline(chtfour2,25,'|');
		tfour2=chararraytoint(chtfour2);
		player.getline(chtsixes2,25,'|');
		tsixes2=chararraytoint(chtsixes2);
		player.getline(chtdot2,25,'|');
		tdot2=chararraytoint(chtdot2);
		player.getline(chtwide,25,'|');
		twide=chararraytoint(chtwide);
		player.getline(chtnoball,25,'|');
		tnoball=chararraytoint(chtnoball);
		player.getline(chwickets,25);
		wickets=chararraytoint(chwickets);
		

		
		if(strcmp(chcnic,a)==0){
			
	    cout<<"\n\n"
	    <<left
		<<setw(22)
		<<name
		<<left
		<<setw(10)
		<<matches
		<<left
		<<setw(6)
		<<truns1
		<<left
		<<setw(6)
		<<setprecision(3)<<((float)truns1/(float)matches)
		<<left
		<<setw(7)
		<<tballs1
		<<left
		<<setw(4)
		<<tfour1
		<<left
		<<setw(4)
		<<tsixes1
		<<left
		<<setw(6)
		<<tdot1
		<<left
		<<setw(6)
		<<fifties
		<<left
		<<setw(6)
		<<centuries
		<<left
		<<setw(6)
		<<setprecision(3)<<(float)((float)truns1/(float)tballs1)*100
		<<left
		<<setw(12)
		<<truns2
		<<left
		<<setw(12)
		<<tballs2
		<<left
		<<setw(4)
		<<tfour2
		<<left
		<<setw(4)
		<<tsixes2
		<<left
		<<setw(12)
		<<tdot2
		<<left
		<<setw(7)
		<<twide
		<<left
		<<setw(9)
		<<tnoball
		<<left
		<<setw(5)
		<<left
		<<setw(7)
		<<wickets
		<<left
		<<setw(6)
		<<setprecision(3)<<((float)truns2/(float)tballs2)*6;
			
			x=1;
			break;
		}
	}
	
	if(x==0){
			cout<<"\n\nSorry file not found in our records\n\n";
		}
	player.close();	
		
}

void editPlayer(void){
	
	fstream player;
	fstream temp;
	
	player.open("Player.txt",ios::in);
	temp.open("Temp.txt",ios::out);
	
	char chname[25];
	char chcnic[25];
	char chmatches[25];
	char chtruns1[25];
	char chtballs1[25];
	char chtfour1[25];
	char chtsixes1[25];
	char chtdot1[25];
	char chcenturies[25];
	char chfifties[25];
	char chtruns2[25];
	char chtballs2[25];
	char chtfour2[25];
	char chtsixes2[25];
	char chtdot2[25];
	char chtwide[25];
	char chtnoball[25];
	char chwickets[25];
	int x=0;
	char a[25];
	cin.ignore();
	cout<<"Enter the CNIC number of player whic you want to update:\t";
	cin.getline(a,25);
	
	while(!player.eof()){
		
		player.getline(chname,25,'|');
		player.getline(chcnic,25,'|');
		player.getline(chmatches,25,'|');
		player.getline(chtruns1,25,'|');
		player.getline(chtballs1,25,'|');
		player.getline(chtfour1,25,'|');
		player.getline(chtsixes1,25,'|');
		player.getline(chtdot1,25,'|');
		player.getline(chcenturies,25,'|');
		player.getline(chfifties,25,'|');
		player.getline(chtruns2,25,'|');
		player.getline(chtballs2,25,'|');
		player.getline(chtfour2,25,'|');
		player.getline(chtsixes2,25,'|');
		player.getline(chtdot2,25,'|');
		player.getline(chtwide,25,'|');
		player.getline(chtnoball,25,'|');
		player.getline(chwickets,25);
		
		if(strcmp(chcnic,a)==0){
			x++;
			cout<<"Enter the new values:\n";
			cout<<"Enter the name of player:\t";
			cin.getline(chname,25);
	        cout<<"Enter the number of matches this player playe:\t";
	        cin.getline(chmatches,25);
			cout<<"Enter the runs made by this batter in whole career:\t";
			cin.getline(chtruns1,25);
			cout<<"Enter the numbers of balls played by this batter in his whole career:\t";
			cin.getline(chtballs1,25);
			cout<<"Enter the number of fours this batter hit in his whole career:\t";
			cin.getline(chtfour1,25);
			cout<<"Enter the number of sixes this batter hit in his whole career:\t";
			cin.getline(chtsixes1,25);
			cout<<"Enter the number of dot balls this batter played in his whole career:\t";
			cin.getline(chtdot1,25);
			cout<<"Enter the number of centuries of this batter:\t";
			cin.getline(chcenturies,25);
			cout<<"Enter the number of fifties of this batter:\t";
			cin.getline(chfifties,25);
			cout<<"Enter the runs came in this bowler's whole career:\t";
			cin.getline(chtruns2,25);
			cout<<"Enter the numbers of balls he played in his whole career:\t";
			cin.getline(chtballs2,25);
			cout<<"Enter the number of fours came in this bowler's overs in his whole career:\t";
			cin.getline(chtfour2,25);
			cout<<"Enter the number of sixes came in this bowler's overs in his whole career:\t";
			cin.getline(chtsixes2,25);
			cout<<"Enter the number of dot balls came in this bowler's whole career:\t";
			cin.getline(chtdot2,25);
			cout<<"Enter the number of wide balls this bowler done in his whole career:\t";
			cin.getline(chtwide,25);
			cout<<"Enter the number of noballs this bowler done in his whole career:\t";
			cin.getline(chtnoball,25);
			cout<<"Enter the number of wickets:\t";
			cin.getline(chwickets,25);	
			
			temp<< chname<<'|'<<chcnic<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';		
			
		}
		
		else{
			
			temp<< chname<<'|'<<chcnic<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';
			
		}
		
	}
	
	player.close();
	temp.close();
	
	player.open("player.txt",ios::out);
    temp.open("temp.txt",ios::in);
    
    while(!temp.eof()){
    	
    	temp.getline(chname,25,'|');
		temp.getline(chcnic,25,'|');
		temp.getline(chmatches,25,'|');
		temp.getline(chtruns1,25,'|');
		temp.getline(chtballs1,25,'|');
		temp.getline(chtfour1,25,'|');
		temp.getline(chtsixes1,25,'|');
		temp.getline(chtdot1,25,'|');
		temp.getline(chcenturies,25,'|');
		temp.getline(chfifties,25,'|');
		temp.getline(chtruns2,25,'|');
		temp.getline(chtballs2,25,'|');
		temp.getline(chtfour2,25,'|');
		temp.getline(chtsixes2,25,'|');
		temp.getline(chtdot2,25,'|');
		temp.getline(chtwide,25,'|');
		temp.getline(chtnoball,25,'|');
		temp.getline(chwickets,25);
		
		player<< chname<<'|'<<chcnic<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';
	}
	
	temp.close();
    player.close();
    remove("temp.txt");
    
    if(x==0){
    	cout<<"Record not found...\n";
	}
	else{
		cout<<"\nRecord updated sucsessfully...\n";
	}
	
}

void deletePlayer(void){
	
	fstream player;
    fstream temp;

    player.open("Player.txt",ios::in);
    temp.open("temp.txt",ios::out);
    
    char chname[25];
	char chcnic[25];
	char chmatches[25];
	char chtruns1[25];
	char chtballs1[25];
	char chtfour1[25];
	char chtsixes1[25];
	char chtdot1[25];
	char chcenturies[25];
	char chfifties[25];
	char chtruns2[25];
	char chtballs2[25];
	char chtfour2[25];
	char chtsixes2[25];
	char chtdot2[25];
	char chtwide[25];
	char chtnoball[25];
	char chwickets[25];
	
	char a[25];
	
    cin.ignore();
	cout<<"Enter the CNIC number of player which you want to delete:\t";
	cin.getline(a,25);
	
    while(!player.eof())
    {
        player.getline(chname,25,'|');
		player.getline(chcnic,25,'|');
		player.getline(chmatches,25,'|');
		player.getline(chtruns1,25,'|');
		player.getline(chtballs1,25,'|');
		player.getline(chtfour1,25,'|');
		player.getline(chtsixes1,25,'|');
		player.getline(chtdot1,25,'|');
		player.getline(chcenturies,25,'|');
		player.getline(chfifties,25,'|');
		player.getline(chtruns2,25,'|');
		player.getline(chtballs2,25,'|');
		player.getline(chtfour2,25,'|');
		player.getline(chtsixes2,25,'|');
		player.getline(chtdot2,25,'|');
		player.getline(chtwide,25,'|');
		player.getline(chtnoball,25,'|');
		player.getline(chwickets,25);
		
        if(strcmp(chcnic,a)==0)
        {
            continue;
        }
        else
        {
           temp<< chname<<'|'<<chcnic<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';
        }


    }
    temp.close();
    player.close();

    player.open("Player.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(chname,25,'|');
		temp.getline(chcnic,25,'|');
		temp.getline(chmatches,25,'|');
		temp.getline(chtruns1,25,'|');
		temp.getline(chtballs1,25,'|');
		temp.getline(chtfour1,25,'|');
		temp.getline(chtsixes1,25,'|');
		temp.getline(chtdot1,25,'|');
		temp.getline(chcenturies,25,'|');
		temp.getline(chfifties,25,'|');
		temp.getline(chtruns2,25,'|');
		temp.getline(chtballs2,25,'|');
		temp.getline(chtfour2,25,'|');
		temp.getline(chtsixes2,25,'|');
		temp.getline(chtdot2,25,'|');
		temp.getline(chtwide,25,'|');
		temp.getline(chtnoball,25,'|');
		temp.getline(chwickets,25);
        
        player<< chname<<'|'<<chcnic<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';
    }
    temp.close();
    player.close();
    remove("temp.txt");
    cout<<"\nRecord deleted sucsessfully\n";
}

void viewAll(void){
	
	
	char chname[25];
	char chcnic[25];
	char chmatches[25];
	char chtruns1[25];
	char chtballs1[25];
	char chtfour1[25];
	char chtsixes1[25];
	char chtdot1[25];
	char chcenturies[25];
	char chfifties[25];
	char chtruns2[25];
	char chtballs2[25];
	char chtfour2[25];
	char chtsixes2[25];
	char chtdot2[25];
	char chtwide[25];
	char chtnoball[25];
	char chwickets[25];
	
	string name;
	int cnic;
	int matches;
	int truns1;
	int tballs1;
	int tfour1;
	int tsixes1;
	int tdot1;
	int centuries;
	int fifties;
	int truns2;
	int tballs2;
	int tfour2;
	int tsixes2;
	int tdot2;
	int twide;
	int tnoball;
	int wickets;
	
		cout<<"\n\n"
	    <<left
		<<setw(22)
		<<"NAME:"
		<<left
		<<setw(10)
		<<"MATCHES:"
		<<left
		<<setw(6)
		<<"RUNS:"
		<<left
		<<setw(6)
		<<"AVG:"
		<<left
		<<setw(7)
		<<"BALLS:"
		<<left
		<<setw(4)
		<<"4s:"
		<<left
		<<setw(4)
		<<"6s"
		<<left
		<<setw(6)
		<<"Dots:"
		<<left
		<<setw(6)
		<<"50s:"
		<<left
		<<setw(6)
		<<"100s:"
		<<left
		<<setw(6)
		<<"SR:"
		<<left
		<<setw(12)
		<<"Run(bowl)"
		<<left
		<<setw(12)
		<<"Ball(bowl)"
		<<left
		<<setw(4)
		<<"4s:"
		<<left
		<<setw(4)
		<<"6s:"
		<<left
		<<setw(12)
		<<"Dots(ball)"
		<<left
		<<setw(7)
		<<"Wide"
		<<left
		<<setw(9)
		<<"NoBalls"
		<<left
		<<setw(7)
		<<"Wick:"
		<<left
		<<setw(6)
		<<"Econ:";
		
	fstream player;
	player.open("Player.txt",ios::in);
	
	do{
		
		player.getline(chname,25,'|');
		name = chname;
		player.getline(chcnic,25,'|');
		cnic=chararraytoint(chcnic);
		player.getline(chmatches,25,'|');
		matches = chararraytoint(chmatches);
		player.getline(chtruns1,25,'|');
		truns1=chararraytoint(chtruns1);
		player.getline(chtballs1,25,'|');
		tballs1=chararraytoint(chtballs1);
		player.getline(chtfour1,25,'|');
		tfour1=chararraytoint(chtfour1);
		player.getline(chtsixes1,25,'|');
		tsixes1=chararraytoint(chtsixes1);
		player.getline(chtdot1,25,'|');
		tdot1=chararraytoint(chtdot1);
		player.getline(chcenturies,25,'|');
		centuries=chararraytoint(chcenturies);
		player.getline(chfifties,25,'|');
		fifties=chararraytoint(chfifties);
		player.getline(chtruns2,25,'|');
		truns2=chararraytoint(chtruns2);
		player.getline(chtballs2,25,'|');
		tballs2=chararraytoint(chtballs2);
		player.getline(chtfour2,25,'|');
		tfour2=chararraytoint(chtfour2);
		player.getline(chtsixes2,25,'|');
		tsixes2=chararraytoint(chtsixes2);
		player.getline(chtdot2,25,'|');
		tdot2=chararraytoint(chtdot2);
		player.getline(chtwide,25,'|');
		twide=chararraytoint(chtwide);
		player.getline(chtnoball,25,'|');
		tnoball=chararraytoint(chtnoball);
		player.getline(chwickets,25);
		wickets=chararraytoint(chwickets);
		

		
		if(cnic>1){
			
		cout<<"\n\n"
	    <<left
		<<setw(22)
		<<name
		<<left
		<<setw(10)
		<<matches
		<<left
		<<setw(6)
		<<truns1
		<<left
		<<setw(6)
		<<setprecision(3)<<((float)truns1/(float)matches)
		<<left
		<<setw(7)
		<<tballs1
		<<left
		<<setw(4)
		<<tfour1
		<<left
		<<setw(4)
		<<tsixes1
		<<left
		<<setw(6)
		<<tdot1
		<<left
		<<setw(6)
		<<fifties
		<<left
		<<setw(6)
		<<centuries
		<<left
		<<setw(6)
		<<setprecision(3)<<(float)((float)truns1/(float)tballs1)*100
		<<left
		<<setw(12)
		<<truns2
		<<left
		<<setw(12)
		<<tballs2
		<<left
		<<setw(4)
		<<tfour2
		<<left
		<<setw(4)
		<<tsixes2
		<<left
		<<setw(12)
		<<tdot2
		<<left
		<<setw(7)
		<<twide
		<<left
		<<setw(9)
		<<tnoball
		<<left
		<<setw(5)
		<<left
		<<setw(7)
		<<wickets
		<<left
		<<setw(6)
		<<setprecision(3)<<((float)truns2/(float)tballs2)*6;
		
		}

		
	}while(!player.eof());
	
}

void newMatch(void){
	
	int overs,runscore1=0,runscore2=0,players,wickets1=0,wickets2=0,balls=0,ballsmax,extras1=0,extras2=0;
	string name1,name2;
	Player team1[11],team2[11];
	int i,o,r,b,c;
	Player obj1,obj2,obj3,obj4;     // obj1 batsman hai obj2 runner hai and obj3 bowler hai
	Batter strike;
	Bowler bowl;
	
	char chname[25];
	char chcnic[25];
	char chmatches[25];
	char chtruns1[25];
	char chtballs1[25];
	char chtfour1[25];
	char chtsixes1[25];
	char chtdot1[25];
	char chcenturies[25];
	char chfifties[25];
	char chtruns2[25];
	char chtballs2[25];
	char chtfour2[25];
	char chtsixes2[25];
	char chtdot2[25];
	char chtwide[25];
	char chtnoball[25];
	char chwickets[25];
	char a[25];
	
	string name;
	int cnic;
	int matches;
	int truns1;
	int tballs1;
	int tfour1;
	int tsixes1;
	int tdot1;
	int centuries;
	int fifties;
	int truns2;
	int tballs2;
	int tfour2;
	int tsixes2;
	int tdot2;
	int twide;
	int tnoball;
	int wickets;
	
	
	
	cout<<"Enter the number of overs of match:\t";
	cin>>overs;
	ballsmax=overs*6;
	a:
	cout<<"Enter the number of players of each team(not more than 11):\t";
	cin>>players;
	if(players>11){
		cout<<"Icorrect player number please enter player number less than 11:\n";
		goto a;
	}
	cout<<"Enter the name of team 1(1st batting team):\t";
	cin>>name1;
	cout<<"Enter the name of team 2(2nd batting team):\t";
	cin>>name2;
	cin.ignore();
	
	system("CLS");
	cout<<"\n\n";
	for(i=0;i<players;i++){
		s:
		cout<<"Enter the CNIC of player number "<<i+1<<" of team "<<name1<<":\t";
		cin.getline(a,25);
		if(strlen(a)>4){
			cout<<"Too much lenghty cnic...\n";
			goto s;
		}
		fstream player;
		player.open("Player.txt",ios::in);
		int x=0;
		while(!player.eof()){
			
		player.getline(chname,25,'|');
		name = chname;
		player.getline(chcnic,25,'|');
		cnic=chararraytoint(chcnic);
		player.getline(chmatches,25,'|');
		matches = chararraytoint(chmatches);
		player.getline(chtruns1,25,'|');
		truns1=chararraytoint(chtruns1);
		player.getline(chtballs1,25,'|');
		tballs1=chararraytoint(chtballs1);
		player.getline(chtfour1,25,'|');
		tfour1=chararraytoint(chtfour1);
		player.getline(chtsixes1,25,'|');
		tsixes1=chararraytoint(chtsixes1);
		player.getline(chtdot1,25,'|');
		tdot1=chararraytoint(chtdot1);
		player.getline(chcenturies,25,'|');
		centuries=chararraytoint(chcenturies);
		player.getline(chfifties,25,'|');
		fifties=chararraytoint(chfifties);
		player.getline(chtruns2,25,'|');
		truns2=chararraytoint(chtruns2);
		player.getline(chtballs2,25,'|');
		tballs2=chararraytoint(chtballs2);
		player.getline(chtfour2,25,'|');
		tfour2=chararraytoint(chtfour2);
		player.getline(chtsixes2,25,'|');
		tsixes2=chararraytoint(chtsixes2);
		player.getline(chtdot2,25,'|');
		tdot2=chararraytoint(chtdot2);
		player.getline(chtwide,25,'|');
		twide=chararraytoint(chtwide);
		player.getline(chtnoball,25,'|');
		tnoball=chararraytoint(chtnoball);
		player.getline(chwickets,25);
		wickets=chararraytoint(chwickets);
		
		      if(strcmp(chcnic,a)==0){
		      	team1[i].Person::setName(name);
		      	team1[i].Person::setCnic(cnic);
		      	team1[i].setMatches(matches);
		      	team1[i].setTruns1(truns1);
		      	team1[i].setTballs1(tballs1);
		      	team1[i].setTfour1(tfour1);
		      	team1[i].setTsixes1(tsixes1);
		      	team1[i].setTdot1(tdot1);
		      	team1[i].setCenturies(centuries);
		      	team1[i].setFifties(fifties);
		      	team1[i].setTruns2(truns2);
		      	team1[i].setTballs2(tballs2);
		      	team1[i].setTfour2(tfour2);
		      	team1[i].setTsixes2(tsixes2);
		      	team1[i].setTdot2(tdot2);
		      	team1[i].setTwide(twide);
		      	team1[i].setTnoball(tnoball);
		      	team1[i].setTwickets(wickets);
		      	x++;
			  }
			
		}
		player.close();
		
		if(x==0){
			player.open("Player.txt",ios::app);
			cout<<"Enter the name of player:\t";
			cin.getline(chname,25);
			cout<<"Enter the number of matches this player played:\t";
	        cin.getline(chmatches,25);
			cout<<"Enter the runs made by this batter in whole career:\t";
			cin.getline(chtruns1,25);
			cout<<"Enter the numbers of balls played by this batter in his whole career:\t";
			cin.getline(chtballs1,25);
			cout<<"Enter the number of fours this batter hit in his whole career:\t";
			cin.getline(chtfour1,25);
			cout<<"Enter the number of sixes this batter hit in his whole career:\t";
			cin.getline(chtsixes1,25);
			cout<<"Enter the number of dot balls this batter played in his whole career:\t";
			cin.getline(chtdot1,25);
			cout<<"Enter the number of centuries of this batter:\t";
			cin.getline(chcenturies,25);
			cout<<"Enter the number of fifties of this batter:\t";
			cin.getline(chfifties,25);
			cout<<"Enter the runs came in this bowler's whole career:\t";
			cin.getline(chtruns2,25);
			cout<<"Enter the numbers of balls he played in his whole career:\t";
			cin.getline(chtballs2,25);
			cout<<"Enter the number of fours came in this bowler's overs in his whole career:\t";
			cin.getline(chtfour2,25);
			cout<<"Enter the number of sixes came in this bowler's overs in his whole career:\t";
			cin.getline(chtsixes2,25);
			cout<<"Enter the number of dot balls came in this bowler's whole career:\t";
			cin.getline(chtdot2,25);
			cout<<"Enter the number of wide balls this bowler done in his whole career:\t";
			cin.getline(chtwide,25);
			cout<<"Enter the number of noballs this bowler done in his whole career:\t";
			cin.getline(chtnoball,25);
			cout<<"Enter the number of wickets:\t";
			cin.getline(chwickets,25);	
			player<< chname<<'|'<<a<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';		
			player.close();
			
			name = chname;
			cnic=chararraytoint(a);
			matches = chararraytoint(chmatches);
		    truns1=chararraytoint(chtruns1);
		    tballs1=chararraytoint(chtballs1);
		    tfour1=chararraytoint(chtfour1);
		    tsixes1=chararraytoint(chtsixes1);
		    tdot1=chararraytoint(chtdot1);
		    centuries=chararraytoint(chcenturies);
		    fifties=chararraytoint(chfifties);
		    truns2=chararraytoint(chtruns2);
		    tballs2=chararraytoint(chtballs2);
		    tfour2=chararraytoint(chtfour2);
		    tsixes2=chararraytoint(chtsixes2);
		    tdot2=chararraytoint(chtdot2);
		    twide=chararraytoint(chtwide);
		    tnoball=chararraytoint(chtnoball);
		    wickets=chararraytoint(chwickets);
		    
		    team1[i].setName(name);
		    team1[i].setCnic(cnic);
		    team1[i].setMatches(matches);
		    team1[i].setTruns1(truns1);
		   	team1[i].setTballs1(tballs1);
	     	team1[i].setTfour1(tfour1);
	      	team1[i].setTsixes1(tsixes1);
		   	team1[i].setTdot1(tdot1);
		   	team1[i].setCenturies(centuries);
		   	team1[i].setFifties(fifties);
		   	team1[i].setTruns2(truns2);
		   	team1[i].setTballs2(tballs2);
		   	team1[i].setTfour2(tfour2);
		   	team1[i].setTsixes2(tsixes2);
		   	team1[i].setTdot2(tdot2);
		   	team1[i].setTwide(twide);
		   	team1[i].setTnoball(tnoball);
		   	team1[i].setTwickets(wickets);
			
		}
	}
	    system("CLS");
	    cout<<"\n\n";
		for(i=0;i<players;i++){
		t:
		cout<<"Enter the CNIC of player number "<<i+1<<" of team "<<name2<<":\t";
		cin.getline(a,25);
		if(strlen(a)>4){
			cout<<"Too much lenghty cnic...\n";
			goto t;
		}
		fstream player;
		player.open("Player.txt",ios::in);
		int x=0;
		while(!player.eof()){
			
		player.getline(chname,25,'|');
		name = chname;
		player.getline(chcnic,25,'|');
		cnic=chararraytoint(chcnic);
		player.getline(chmatches,25,'|');
		matches = chararraytoint(chmatches);
		player.getline(chtruns1,25,'|');
		truns1=chararraytoint(chtruns1);
		player.getline(chtballs1,25,'|');
		tballs1=chararraytoint(chtballs1);
		player.getline(chtfour1,25,'|');
		tfour1=chararraytoint(chtfour1);
		player.getline(chtsixes1,25,'|');
		tsixes1=chararraytoint(chtsixes1);
		player.getline(chtdot1,25,'|');
		tdot1=chararraytoint(chtdot1);
		player.getline(chcenturies,25,'|');
		centuries=chararraytoint(chcenturies);
		player.getline(chfifties,25,'|');
		fifties=chararraytoint(chfifties);
		player.getline(chtruns2,25,'|');
		truns2=chararraytoint(chtruns2);
		player.getline(chtballs2,25,'|');
		tballs2=chararraytoint(chtballs2);
		player.getline(chtfour2,25,'|');
		tfour2=chararraytoint(chtfour2);
		player.getline(chtsixes2,25,'|');
		tsixes2=chararraytoint(chtsixes2);
		player.getline(chtdot2,25,'|');
		tdot2=chararraytoint(chtdot2);
		player.getline(chtwide,25,'|');
		twide=chararraytoint(chtwide);
		player.getline(chtnoball,25,'|');
		tnoball=chararraytoint(chtnoball);
		player.getline(chwickets,25);
		wickets=chararraytoint(chwickets);
		
		      if(strcmp(chcnic,a)==0){
		      	team2[i].setName(name);
		      	team2[i].setCnic(cnic);
		      	team2[i].setMatches(matches);
		      	team2[i].setTruns1(truns1);
		      	team2[i].setTballs1(tballs1);
		      	team2[i].setTfour1(tfour1);
		      	team2[i].setTsixes1(tsixes1);
		      	team2[i].setTdot1(tdot1);
		      	team2[i].setCenturies(centuries);
		      	team2[i].setFifties(fifties);
		      	team2[i].setTruns2(truns2);
		      	team2[i].setTballs2(tballs2);
		      	team2[i].setTfour2(tfour2);
		      	team2[i].setTsixes2(tsixes2);
		      	team2[i].setTdot2(tdot2);
		      	team2[i].setTwide(twide);
		      	team2[i].setTnoball(tnoball);
		      	team2[i].setTwickets(wickets);
		      	x++;
			  }
			
		}
		player.close();
		
		if(x==0){
			player.open("Player.txt",ios::app);
			cout<<"Enter the name of player:\t";
			cin.getline(chname,25);
			cout<<"Enter the number of matches this player played:\t";
	        cin.getline(chmatches,25);
			cout<<"Enter the runs made by this batter in whole career:\t";
			cin.getline(chtruns1,25);
			cout<<"Enter the numbers of balls played by this batter in his whole career:\t";
			cin.getline(chtballs1,25);
			cout<<"Enter the number of fours this batter hit in his whole career:\t";
			cin.getline(chtfour1,25);
			cout<<"Enter the number of sixes this batter hit in his whole career:\t";
			cin.getline(chtsixes1,25);
			cout<<"Enter the number of dot balls this batter played in his whole career:\t";
			cin.getline(chtdot1,25);
			cout<<"Enter the number of centuries of this batter:\t";
			cin.getline(chcenturies,25);
			cout<<"Enter the number of fifties of this batter:\t";
			cin.getline(chfifties,25);
			cout<<"Enter the runs came in this bowler's whole career:\t";
			cin.getline(chtruns2,25);
			cout<<"Enter the numbers of balls he played in his whole career:\t";
			cin.getline(chtballs2,25);
			cout<<"Enter the number of fours came in this bowler's overs in his whole career:\t";
			cin.getline(chtfour2,25);
			cout<<"Enter the number of sixes came in this bowler's overs in his whole career:\t";
			cin.getline(chtsixes2,25);
			cout<<"Enter the number of dot balls came in this bowler's whole career:\t";
			cin.getline(chtdot2,25);
			cout<<"Enter the number of wide balls this bowler done in his whole career:\t";
			cin.getline(chtwide,25);
			cout<<"Enter the number of noballs this bowler done in his whole career:\t";
			cin.getline(chtnoball,25);
			cout<<"Enter the number of wickets:\t";
			cin.getline(chwickets,25);	
			player<< chname<<'|'<<a<<'|'<<chmatches<<'|'<<chtruns1<<'|'<<chtballs1<<'|'<<chtfour1<<'|'<<chtsixes1<<'|'<<chtdot1<<'|'<<chcenturies<<'|'<<chfifties<<'|'<<chtruns2<<'|'<<chtballs2<<'|'<<chtfour2<<'|'<<chtsixes2<<'|'<<chtdot2<<'|'<<chtwide<<'|'<<chtnoball<<'|'<<chwickets<<'\n';		
			player.close();
			
			name = chname;
			cnic=chararraytoint(a);
			matches = chararraytoint(chmatches);
		    truns1=chararraytoint(chtruns1);
		    tballs1=chararraytoint(chtballs1);
		    tfour1=chararraytoint(chtfour1);
		    tsixes1=chararraytoint(chtsixes1);
		    tdot1=chararraytoint(chtdot1);
		    centuries=chararraytoint(chcenturies);
		    fifties=chararraytoint(chfifties);
		    truns2=chararraytoint(chtruns2);
		    tballs2=chararraytoint(chtballs2);
		    tfour2=chararraytoint(chtfour2);
		    tsixes2=chararraytoint(chtsixes2);
		    tdot2=chararraytoint(chtdot2);
		    twide=chararraytoint(chtwide);
		    tnoball=chararraytoint(chtnoball);
		    wickets=chararraytoint(chwickets);
		    
		    team2[i].setName(name);
		    team2[i].setCnic(cnic);
		    team2[i].setMatches(matches);
		    team2[i].setTruns1(truns1);
		   	team2[i].setTballs1(tballs1);
	     	team2[i].setTfour1(tfour1);
	      	team2[i].setTsixes1(tsixes1);
		   	team2[i].setTdot1(tdot1);
		   	team2[i].setCenturies(centuries);
		   	team2[i].setFifties(fifties);
		   	team2[i].setTruns2(truns2);
		   	team2[i].setTballs2(tballs2);
		   	team2[i].setTfour2(tfour2);
		   	team2[i].setTsixes2(tsixes2);
		   	team2[i].setTdot2(tdot2);
		   	team2[i].setTwide(twide);
		   	team2[i].setTnoball(tnoball);
		   	team2[i].setTwickets(wickets);
			
		}
	}
	
	system("CLS");
	cout<<"Enter the correct index of opening and running batsman of team "<<name1<<" respectively:\n";
	for(i=0;i<players;i++){
		cout<<i<<")"<<team1[i].Person::getName()<<"  "<<team1[i].Person::getCnic();
		cout<<"\n";
	}
	cin>>o>>r;
	obj1=team1[o];
	obj2=team1[r];
//	cout<<"Enter the correct index of bowler of team "<<name2<<":\n";
//	for(i=0;i<players;i++){
//		cout<<i<<")"<<team2[i].Person::getName()<<"  "<<team2[i].Person::getCnic();
//		cout<<"\n";
//	}
//	cin>>b;
//	obj3=team2[b];
	
	while((balls<=ballsmax)&&(wickets1!=players)){
		if(balls%6==0){
			cout<<"Enter the correct index of next bowler:\t";
			for(i=0;i<players;i++){
				if(i!=b){
					cout<<"\n";
					cout<<i<<")"<<team2[i].Person::getName()<<"  "<<team2[i].Person::getCnic();
				}
			}
			cin>>b;
			obj3=team2[b];
		}
		b:
		cout<<"\n\nEnter the choice:\n1)Single\n2)Double\n3)Tripple\n4)Choka\n5)Chakka\n6)WideBall\n7)Noball\n8)BatsmanOut\n9)RunnerOut\n10)Dot\n";
		cin>>c;
		if((c>10)||(c<1)){
			cout<<"Invalid input...\n";
			goto b;
		}
		
		switch(c){
			
			case 1:
				runscore1=runscore1+1;
				balls=balls+1;
				extras2=0+extras2;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(1);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				obj4=obj1;
				obj1=obj2;
				obj2=obj4;
				strike.update();
				bowl.setRuns2(1);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 2:
				runscore1=runscore1+2;
				balls=balls+1;
				extras2=0+extras2;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(2);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(2);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 3:
				runscore1=runscore1+3;
				balls=balls+1;
				extras2=0+extras2;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(3);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				obj4=obj1;
				obj1=obj2;
				obj2=obj4;
				strike.update();
				bowl.setRuns2(3);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 4:
				runscore1=runscore1+4;
				balls=balls+1;
				extras2=0+extras2;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(4);
				strike.setDot1(0);
				strike.setFour1(1);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(4);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(1);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 5:
				runscore1=runscore1+6;
				balls=balls+1;
				extras2=0+extras2;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(6);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(1);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(6);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(1);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 6:
				runscore1=runscore1+1;
				balls=balls+0;
				extras2=1+extras2;
				wickets=0+wickets;
				strike.setBalls1(0);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(1);
				bowl.setBalls2(0);
				bowl.setWide(1);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 7:
				runscore1=runscore1+1;
				balls=balls+0;
				extras2=1+extras2;
				wickets=0+wickets;
				strike.setBalls1(0);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(1);
				bowl.setBalls2(0);
				bowl.setWide(0);
				bowl.setNoball(1);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 8:
				runscore1=runscore1+0;
				balls=balls+1;
				extras2=0+extras2;
				wickets=1+wickets;
				strike.setBalls1(1);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				cout<<"Enter the correct index of ne batsman of team "<<name1;
				for(i=0;i<players;i++){
	             if(o!=i){	
		         cout<<i<<")"<<team1[i].Person::getName()<<"  "<<team1[i].Person::getCnic();
		         cout<<"\n";
		        }
		        }
		        cin>>o;
		        obj1=team1[o];
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(0);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(1);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 9:
				runscore1=runscore1+0;
				balls=balls+1;
				extras2=0+extras2;
				wickets=1+wickets;
				strike.setBalls1(1);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				obj4=obj1;
				obj1=obj2;
				obj2=obj4;
				strike.update();
				cout<<"Enter the correct index of ne batsman of team "<<name1;
				for(i=0;i<players;i++){
	             if(o!=i){	
		         cout<<i<<")"<<team1[i].Person::getName()<<"  "<<team1[i].Person::getCnic();
		         cout<<"\n";
		        }
		        }
		        cin>>o;
		        obj1=team1[o];
				bowl.setRuns2(0);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;	
				
			case 10:
				runscore1=runscore1+0;
				balls=balls+1;
				extras2=0+extras2;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				obj4=obj1;
				obj1=obj2;
				obj2=obj4;
				strike.update();
				bowl.setRuns2(0);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name1<<" "<<runscore1<<"/"<<wickets1<<" "<<name2<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;			    			    	
		}
		
	}
	    balls=0;
	    
	    	system("CLS");
	         cout<<"Enter the correct index of opening and running batsman of team "<<name2<<" respectively:\n";
	          for(i=0;i<players;i++){
		        cout<<i<<")"<<team2[i].Person::getName()<<"  "<<team2[i].Person::getCnic();
		         cout<<"\n";
	           }
               	cin>>o>>r;
	            obj1=team2[o];
	            obj2=team2[r];
//	        cout<<"Enter the correct index of bowler of team "<<name2<<":\n";
//	          for(i=0;i<players;i++){
//		         cout<<i<<")"<<team2[i].Person::getName()<<"  "<<team2[i].Person::getCnic();
//		              cout<<"\n";
//	            }
//	            cin>>b;
//	            obj3=team1[b];
	    
	    
		while((balls<=ballsmax)&&(wickets1!=players)&&(runscore2>runscore1)){
				if(balls%6==0){
			cout<<"Enter the correct index of next bowler:\t";
			for(i=0;i<players;i++){
				cout<<i<<")"<<team1[i].Person::getName()<<"  "<<team1[i].Person::getCnic();
			}
			cin>>b;
			obj3=team1[b];
		}
		
		if(balls%6==0){
				cout<<"Enter the correct index of bowler of team "<<name1<<":\n";
	             for(i=0;i<players;i++){
	             if(b!=i){	
	              cout<<"\n";
		         cout<<i<<")"<<team1[i].Person::getName()<<"  "<<team1[i].Person::getCnic();
		        
		        }
	            }
	               cin>>b;
	               obj3=team2[b];
		}
		c:
		cout<<"\n\nEnter the choice:\n1)Single\n2)Double\n3)Tripple\n4)Choka\n5)Chakka\n6)WideBall\n7)Noball\n8)BatsmanOut\n9)RunnerOut\n10)DotBall\n";
		cin>>c;
		if((c>8)||(c<1)){
			cout<<"Invalid input...\n";
			goto c;
		}
		
		switch(c){
			
			case 1:
				runscore2=runscore1+2;
				balls=balls+1;
				extras1=0+extras1;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(1);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				obj4=obj1;
				obj1=obj2;
				obj2=obj4;
				strike.update();
				bowl.setRuns2(1);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"CR "<<setprecision(3)<<((runscore1/balls)*6)<<"RQ "<<setprecision(3)<<(((runscore1-runscore2)/(ballsmax-balls))*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				cout<<"Target: "<<runscore1;
				cout<<name2<<" need "<<runscore1-runscore2<<" to win on "<<ballsmax-balls;
				break;
				
			case 2:
				runscore2=runscore2+2;
				balls=balls+1;
				extras1=0+extras1;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(2);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(2);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 3:
				runscore2=runscore2+3;
				balls=balls+1;
				extras1=0+extras1;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(3);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				obj4=obj1;
				obj1=obj2;
				obj2=obj4;
				strike.update();
				bowl.setRuns2(3);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 4:
				runscore2=runscore2+4;
				balls=balls+1;
				extras1=0+extras1;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(4);
				strike.setDot1(0);
				strike.setFour1(1);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(4);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(1);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 5:
				runscore2=runscore1+6;
				balls=balls+1;
				extras1=0+extras1;
				wickets=0+wickets;
				strike.setBalls1(1);
				strike.setRuns1(6);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(1);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(6);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(1);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 6:
				runscore2=runscore2+1;
				balls=balls+0;
				extras1=1+extras1;
				wickets=0+wickets;
				strike.setBalls1(0);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(1);
				bowl.setBalls2(0);
				bowl.setWide(1);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 7:
				runscore2=runscore1+2;
				balls=balls+0;
				extras1=1+extras1;
				wickets=0+wickets;
				strike.setBalls1(0);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
				strike.update();
				bowl.setRuns2(1);
				bowl.setBalls2(0);
				bowl.setWide(0);
				bowl.setNoball(1);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 8:
				runscore2=runscore2+0;
				balls=balls+1;
				extras1=0+extras1;
				wickets=1+wickets;
				strike.setBalls1(1);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
//				obj4=obj1;
//				obj1=obj2;
//				obj2=obj4;
  				cout<<"Enter the correct index of ne batsman of team "<<name2;
				for(i=0;i<players;i++){
	             if(o!=i){	
		         cout<<i<<")"<<team2[i].Person::getName()<<"  "<<team2[i].Person::getCnic();
		         cout<<"\n";
		        }
		        }
		        cin>>o;
		        obj1=team2[o];
				strike.update();
				cout<<"Enter the correct index of ne batsman of team "<<name1;
				for(i=0;i<players;i++){
	             if(o!=i){	
	             cout<<"\n";
		         cout<<i<<")"<<team1[i].Person::getName()<<"  "<<team1[i].Person::getCnic();
		       
		        }
		        }
		        cin>>o;
		        obj1=team1[o];
				bowl.setRuns2(0);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(1);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;
				
			case 9:
				runscore2=runscore2+0;
				balls=balls+1;
				extras1=0+extras1;
				wickets=1+wickets;
				strike.setBalls1(1);
				strike.setRuns1(0);
				strike.setDot1(0);
				strike.setFour1(0);
				strike.setSixes1(0);
				obj1.update(strike);
				obj4=obj1;
				obj1=obj2;
				obj2=obj4;
				strike.update();
				cout<<"Enter the correct index of ne batsman of team "<<name2;
				for(i=0;i<players;i++){
	             if(o!=i){	
		         cout<<i<<")"<<team2[i].Person::getName()<<"  "<<team2[i].Person::getCnic();
		         cout<<"\n";
		        }
		        }
		        cin>>o;
		        obj1=team2[o];
				cout<<"Enter the correct index of next batsman:\t";
			    for(i=0;i<players;i++){
				cout<<i<<")"<<team2[i].Person::getName()<<"  "<<team2[i].Person::getCnic();
			    }
			    cin>>o;
			    obj1=team2[o];
				cout<<"Enter the correct index of ne batsman of team "<<name1;
				for(i=0;i<players;i++){
	             if(o!=i){	
		         cout<<i<<")"<<team1[i].Person::getName()<<"  "<<team1[i].Person::getCnic();
		         cout<<"\n";
		        }
		        }
		        cin>>o;
		        obj1=team1[o];
				bowl.setRuns2(0);
				bowl.setBalls2(1);
				bowl.setWide(0);
				bowl.setNoball(0);
				bowl.setWickets(0);
				bowl.setSixes2(0);
				bowl.setFour2(0);
				obj3.update(bowl);
				bowl.update();
				system("CLS");
				cout<<"\n\n";
				cout<<name2<<" "<<runscore2<<"/"<<wickets2<<" "<<name1<<"\t\t*"<<obj1.getName()<<" "<<obj1.getRuns1()<<"("<<obj1.getBalls1()<<")\t\t"<<obj2.getName()<<" "<<obj2.getRuns1()<<"("<<obj2.getBalls1()<<")\n";
				cout<<"Overs("<<balls/6<<"."<<balls%6<<")\t\t"<<"RR "<<setprecision(3)<<((runscore1/balls)*6)<<"\t\t"<<obj3.Person::getName()<<" "<<obj3.getRuns2()<<"("<<obj3.getBalls2()<<")\n";
				break;			    	
		}
		
	}
	
	system("CLS");
	cout<<"\n\nMatch finish..\n";
	
	if(runscore1>runscore2){
		cout<<name1<<" won by "<<runscore1-runscore2<<endl;
	}
	else{
		cout<<name2<<" won by "<<players-wickets2<<" with "<<ballsmax-balls<<" on hands";
	}
	

		
	
	
	
}

int main(void){
	
	int choice;
	cout<<"\n\n=========================================== WELCOME TO CRICKET SCORE MANAGEMENT SYSTEM ===========================================\n\n";
	fflush(stdin);
	cout<<"\nEnter your choice\n1)Insert any new player in record\n2)Viewing players record\n3)Edit any players record\n4)Delete any players record\n5)View all\n6)Start new match\n7)Quit\n";
	cin>>choice;
	
	switch(choice){       
		
		case 1:
			system("CLS");
			cout<<"\n\n";
			insertPlayer();
			cout<<"\n\n";
			system("pause");
			system("CLS");
			main();
			break;
			
		case 2:
			system("CLS");
			cout<<"\n\n";
			searchPlayer();
			cout<<"\n\n";
			system("pause");
			system("CLS");
			main();
			break;
			break;
			
		case 3:
			system("CLS");
			cout<<"\n\n";
			editPlayer();
			cout<<"\n\n";
			system("pause");
			system("CLS");
			main();
			break;
			
		case 4:
			system("CLS");
			cout<<"\n\n";
			deletePlayer();
			cout<<"\n\n";
			system("pause");
			system("CLS");
			main();
			break;
			
		case 5:
			system("CLS");
			cout<<"\n\n";
			viewAll();
			cout<<"\n\n";
			system("pause");
			system("CLS");
			main();
			break;
			
		case 6:
			system("CLS");
			cout<<"\n\n";
			newMatch();
			cout<<"\n\n";
			system("pause");
			system("CLS");
			main();
			break;
							
		case 7:
			break;
		default:
			system("CLS");
			cout<<"Invalid Choice......\n";
			system("pause");
			system("CLS");
			main();
			break;
	}
}
