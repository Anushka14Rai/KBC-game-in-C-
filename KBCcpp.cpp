#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
//function to check if password is valid
//definition
void login(){        
	char choice;
	char name[50];
	char pword[10]="winwingo";
	char pass[10];
	cout<<"Please enter your name :"<<endl;
	cin>>name;
	fstream fin;
	fin.open("record.dat",ios::out|ios::binary);       //opening/creating a file to save record
	fin<<name;                                         //feeding data into the file
	cout<<"Enter the password: "<<endl;
	cin>>pass;
	int a=strcmp(pword, pass);                         //checking if entered password matches
	if(a==0){
		cout<<"Password matched. You can play the game."<<endl;
	}
	else{
		cout<<"Incorrect password"<<endl;
		cout<<"Do you want to try again? y/n"<<endl;     
		cin>>choice;
		if(choice=='y'){
			login();
		}
		else{
			_Exit(0);
		}
	}
}
void end(int x){  //definition of end function
	cout<<"You can't continue the game as you lost"<<endl;
	cout<<"The amount you won today is Rs."<<x<<endl;
	cout<<"Congratulation !"<<endl;
	_Exit(0);
}
int main(){
	login();
	system("CLS");
	time_t tmNow;
        tmNow = time(NULL);
        struct tm t = *localtime(&tmNow);
        if(t.tm_hour>12)
        {
            t.tm_hour-=12;
            t.tm_hour=abs(t.tm_hour);
        }
        cout<<"Date and Time : "<<t.tm_hour<<":"<<t.tm_min<<"  "<<t.tm_mday<<"-"<<t.tm_mon+1<<"-"<<t.tm_year+1900<<endl;       //displaying current date and time
	int i,amount=0;
	Sleep(2000);
	cout<<"Hello! Welcome to KBC "<<endl;
	Sleep(2000);
	cout<<"I am your host for the game. Let's begin."<<endl;
	Sleep(3000);
	cout<<"Before we start the game, there are some quick rules that i wish to brief you with: "<<endl;
	Sleep(4000);
	cout<<"There are 16 questions in this game,Each of which has a prize money associated to them. As you give the right answer, you increase the amount you win."<<endl;
	Sleep(7000);
	cout<<"For every Question you get four options, out of which just one is correct, And you are supposed to enter the index number of the answer you think is correct."<<endl;
	Sleep(7000);
	cout<<"You have 15 seconds to answer first 5 question beyond that you will get 30 seconds for every question."<<endl;
	Sleep(5000);
	cout<<"I see you are through with the rules now let me tell you the prize money alongside every question."<<endl;
	Sleep(5000);
	cout<<"Here's the grid: "<<endl;
	Sleep(2000);
	cout<<"Question 1 --------------------- Rs. 1,000"<<endl;
	Sleep(2000);
	cout<<"Question 2 --------------------- Rs. 2,000"<<endl;
	Sleep(2000);
	cout<<"Question 3 --------------------- Rs. 3,000"<<endl;
	Sleep(2000);
	cout<<"Question 4 --------------------- Rs. 5,000"<<endl;
	Sleep(2000);
	cout<<"Question 5 --------------------- Rs. 10,000"<<endl;
	Sleep(2000);
	cout<<"Question 6 --------------------- Rs. 20,000"<<endl;
	Sleep(2000);
	cout<<"Question 7 --------------------- Rs. 40,000"<<endl;
	Sleep(2000);
	cout<<"Question 8 --------------------- Rs. 80,000"<<endl;
	Sleep(2000);
	cout<<"Question 9 --------------------- Rs. 1,60,000"<<endl;
	Sleep(2000);
	cout<<"Question 10 -------------------- Rs. 3,20,000"<<endl;
	Sleep(2000);
	cout<<"Question 11 -------------------- Rs. 6,40,000"<<endl;
	Sleep(2000);
	cout<<"Question 12 -------------------- Rs. 12,50,000"<<endl;
	Sleep(2000);
	cout<<"Question 13 -------------------- Rs. 25,00,000"<<endl;
	Sleep(2000);
	cout<<"Question 14 -------------------- Rs. 50,00,000"<<endl;
	Sleep(2000);
	cout<<"Question 15 -------------------- Rs. 1,00,00,000"<<endl;
	Sleep(2000);
	cout<<"And the JACKPOT QUESTION "<<endl;
	Sleep(2000);
	cout<<"Question 16 -------------------- Rs. 7,00,00,000"<<endl;
	Sleep(2000);
	cout<<"I guess we are ready to start the game! Well then fasten up your seatbelts, Here comes your first Question. Remember you have just 10 seconds to answer!"<<endl;
	system("CLS");
	cout<<"The trigger of a gun is colloquially also called "<<endl;                 //First question
	Sleep(1000);
	cout<<"Your Options are: "<<endl;
	cout<<"1-Hathi"<<endl;
	cout<<"2-Ghoda"<<endl;          //Answer
	cout<<"3-Baagh"<<endl;
	cout<<"4-Oont"<<endl;
    cout << "Timer: 15 sec starts"<<endl;
	cout << "Please enter the input: "<<endl;
	clock_t start1 = clock();             //Starting timer
	float t0=clock();
    clock_t endwait1;
    endwait1 = 15000+t0;                   //setting time limit
	cin>>i;   
if(!kbhit() && clock()>=endwait1){
	cout<<"Times up !"<<endl;              //if limit exceed game ends
	end(amount);
}else{
	if(i==2){                               //check if answer is correct
		cout<<"Congratulations! Your answer is correct. You won Rs. 1,000"<<endl;
		amount=1000;
	}else{                                  // if answer is incorrect code ends
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"The second Question is here: "<<endl;
cout<<"In the movie 'Pad Man' The character played by Akshay Kumar \n invents a low-cost machine for the production of which of these: "<<endl;         //Second question
	Sleep(1000);
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Paddy Crushers"<<endl;
cout<<"2-Writing pads"<<endl;
cout<<"3-Sanitary pads"<<endl;      //Answer
cout<<"4-Knee pads"<<endl;
float t2=clock();
clock_t start2 =clock();
cout <<"Timer: 15 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait2;                                   //Starting timer
    endwait2 =  15000+(int)t2 ;
	cin>>i;   
if(!kbhit() && clock()>=endwait2){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==3){
		cout<<"Congratulations! Your answer is correct. You won Rs. 2,000"<<endl;
		amount=2000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Going good! Here comes the third question: "<<endl;
cout<<"What is the new name of the Hyderabad franchise that replaced Deccan Charges in IPL season 6?"<<endl;                //Third question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Sun Chargers"<<endl;
cout<<"2-Nizam Jyothi"<<endl;
cout<<"3-Andhra Aces"<<endl;
cout<<"4-Sun risers Hyderabad"<<endl;          //Answer
float t3=clock();
clock_t start3 =clock();
cout <<"Timer: 15 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait3;                                          //Starting timer
    endwait3 =  15000+(int)t3;
	cin>>i;   
if(!kbhit() && clock()>=endwait3){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==4){
		cout<<"Congratulations! Your answer is correct. You won Rs. 3,000"<<endl;
		amount=3000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"You're great!, lets move on to fourth question.'"<<endl;
cout<<"In India, under which Union Ministry does the 'RAJBHASHA VIBHAG' function?"<<endl;          //Fourth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Home Affairs "<<endl;           //Answer
cout<<"2- HRD"<<endl;
cout<<"3-Culture"<<endl;
cout<<"4-Law & Justice"<<endl;
float t4=clock();                        
clock_t start4 =clock();                           //Starting timer
cout <<"Timer: 15 sec starts"<<endl;                               
	cout <<"Please enter the input: "<<endl;
	clock_t endwait4;  
    endwait4 =  15000+(int)t4;
	cin>>i;   
if(!kbhit() && clock()>=endwait4){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==1){
		cout<<"Congratulations! Your answer is correct. You won Rs. 5,000"<<endl;
		amount=5000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"The Fifth Question is here: "<<endl;
cout<<"According to a proverb, what is said to be 'MOTHER OF INVENTION' ?"<<endl;                //Fifth question
Sleep(1000);
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Society"<<endl;
cout<<"2- Problem"<<endl;
cout<<"3-Science"<<endl;
cout<<"4-Necessity"<<endl;          //Answer
float t5=clock();
clock_t start5 =clock();
cout <<"Timer: 15 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait5;  
    endwait5 =  15000+(int)t5;
	cin>>i;   
if(!kbhit() && clock()>=endwait5){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==4){
		cout<<"Congratulations! Your answer is correct. You won Rs. 10,000"<<endl;
		amount=10000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Excellent! You've succesfully passed the first stage. Now you will be given 30 seconds to answer the questions"<<endl;
Sleep(2000);
cout<<"Here, our Jackpot Question also gets activated."<<endl;
Sleep(2000);
system("CLS");
cout<<"So now, without wasting anymore time, i present the sixth question."<<endl;
cout<<"Floor exercise, vault, and uneven bars are events in which sport ?"<<endl;                    //Sixth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Synchronised Swimming "<<endl;
cout<<"2-Gymnastics"<<endl;          //Answer
cout<<"3-Skating"<<endl;
cout<<"4-Wrestling"<<endl;
float t6=clock();
clock_t start6 =clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait6;  
    endwait6 =  30000+(int)t6;
	cin>>i;   
if(!kbhit() && clock()>=endwait6){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==2){
		cout<<"Congratulations! Your answer is correct. You won Rs. 20,000"<<endl;
		amount=20000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"The Seventh Question is here: "<<endl;
cout<<"Which actress got married to Siddharth Roy Kapur in 2012 ?"<<endl;                 //Seventh question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Prachi Desai"<<endl;
cout<<"2-Lisa Ray"<<endl;
cout<<"3-Vidya Balan"<<endl;        //Answer
cout<<"4-Sushmita Sen"<<endl;
float t7=clock();
clock_t start7 =clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait7;  
    endwait7 =  30000+(int)t7;
	cin>>i;   
if(!kbhit() && clock()>=endwait7){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==3){
		cout<<"Congratulations! Your answer is correct. You won Rs. 40,000"<<endl;
		amount=40000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Getting exciting! isn't it, Let get to the eight question: "<<endl;
cout<<"Which among these is an Island country ?"<<endl;                     //Eigth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Yemen"<<endl;
cout<<"2-Maldives"<<endl;         //Answer
cout<<"3-Oman "<<endl;
cout<<"4-Peru"<<endl;
float t8=clock();
clock_t start8=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait8;  
    endwait8 =  30000+(int)t8;
	cin>>i;   
if(!kbhit() && clock()>=endwait8){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==2){
		cout<<"Congratulations! Your answer is correct. You won Rs. 80,000"<<endl;
		amount=80000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Now we proceed to the ninth question."<<endl;
cout<<"The Nineth Question is here: "<<endl;
cout<<" what has been the currency of Greece since 2002?"<<endl;           //Ninth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Euro"<<endl;        //Answer
cout<<"2-peso"<<endl;
cout<<"3-Drachma"<<endl;
cout<<"4-Lira"<<endl;
float t9=clock();
clock_t start9=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait9;  
    endwait9 =  30000+(int)t9;
	cin>>i;   
if(!kbhit() && clock()>=endwait9){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==1){
		cout<<"Congratulations! Your answer is correct. You won Rs. 1,60,000"<<endl;
		amount=160000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Tenth Question! Already! You are doing amazing. Here you go-"<<endl;
cout<<"The Twelth Question is here: "<<endl;
cout<<"According to the Devi, Bhagavata, from the tears of which god is the rudraksha tree believed to have been created?"<<endl;                 //Tenth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Vishnu"<<endl;
cout<<"2-Shiva"<<endl;        //Answer
cout<<"3-Nhrama"<<endl;
cout<<"4-Kamadeva"<<endl;
float t10=clock();
clock_t start10=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait10;  
    endwait10 =  30000+(int)t10;
	cin>>i;   
if(!kbhit() && clock()>=endwait10){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==2){
		cout<<"Congratulations! Your answer is correct. You won Rs. 3,20,000"<<endl;
		amount=320000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Moving on to the 11'th Question: "<<endl;
cout<<"which Indian sportsperson was awarded the 'order of Australia' award in 2012?"<<endl;                  //Eleventh question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Saina Nehwal "<<endl;
cout<<"2-Sachin Tendulkar"<<endl;     //Answer
cout<<"3-Sania Mirza"<<endl;
cout<<"4- Rahul Dravid"<<endl;
float t11=clock();
clock_t start11=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait11;  
    endwait11 =  30000+(int)t11;
	cin>>i;   
if(!kbhit() && clock()>=endwait11){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==2){
		cout<<"Congratulations! Your answer is correct. You won Rs. 6,40,000"<<endl;
		amount=640000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Now now, We are at the twelth question.You are playing for Rs. 12.5 Lakhs. Let's go."<<endl;
cout<<"Which constituency did Abhijit Mukherjee represents in the 15th Lok Sabha ?"<<endl;                       //Twelvth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Jadavpur"<<endl;
cout<<"2- Birbhum"<<endl;
cout<<"3-Jangipur"<<endl;       //Answer
cout<<"4-Midnapore"<<endl;
float t12=clock();
clock_t start12=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait12;  
    endwait12 =  30000+(int)t12;
	cin>>i;   
if(!kbhit() && clock()>=endwait12){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==3){
		cout<<"Congratulations! Your answer is correct. You won Rs. 12,50,000"<<endl;
		amount=1250000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Well! We are so close to the end of the game. The thirteenth question,for 25 Lakhs, is here:"<<endl;
cout<<"Which incarnation of Vishnu appeared when the demon king Bali ruled the entire universe ?"<<endl;                        //Thirteenth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Rama"<<endl;
cout<<"2-Varaha"<<endl;
cout<<"3-Vamana"<<endl;         //Answer
cout<<"4- Parashurama"<<endl;
float t13=clock();
clock_t start13=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait13;  
    endwait13 =  30000+(int)t13;
	cin>>i;   
if(!kbhit() && clock()>=endwait13){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==3){
		cout<<"Congratulations! Your answer is correct. You won Rs. 25,00,000"<<endl;
		amount=2500000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"The Fourthenth Question, for Rs.50 Lakhs, is here: "<<endl;
cout<<"Which of these ships was not part of Christopher Columbus's first voyage in 1492 ?"<<endl;                        //Forteenth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Nina"<<endl;
cout<<"2-La Gorda"<<endl;       //Answer
cout<<"3-Pinta"<<endl;
cout<<"4-Santa Maria"<<endl;
float t14=clock();
clock_t start14=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait14;  
    endwait14 =  30000+(int)t14;
	cin>>i;   
if(!kbhit() && clock()>=endwait14){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==2){
		cout<<"Congratulations! Your answer is correct. You won Rs. 50,00,000"<<endl;
		amount=5000000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Oh my!So far so good We are on the second-last, i.e. 15th question. With a value of Rs.1 Crore,the fifteenth question is: "<<endl;
cout<<"With which religion would you associate the practice of Santhara fasting unto death?"<<endl;                                 //Fifteenth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1-Jainism"<<endl;     //Answer
cout<<"2-Sikhism"<<endl;
cout<<"3-Buddhism"<<endl;
cout<<"4-Shintoism"<<endl;
float t15=clock();
clock_t start15=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait15;  
    endwait15 =  30000+(int)t15;
	cin>>i;   
if(!kbhit() && clock()>=endwait15){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==1){
		cout<<"Congratulations! Your answer is correct. You won Rs. 1,00,00,000"<<endl;
		amount=10000000;
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
Sleep(2000);
system("CLS");
cout<<"Hold your heartbeats! We've reached the last question. For a whooping amount of 7 crore, the question is: "<<endl;
cout<<"Whom did Ravindranath Tagore dedicate his book 'VISVA PARICHAY' written on science?"<<endl;             //Sixteenth question
Sleep(3000);
cout<<"The options are:"<<endl;
cout<<"1- C v raman"<<endl;
cout<<"2-Jagdish chandra Bose"<<endl;
cout<<"3-P c Roy"<<endl;
cout<<"4-Satyendra nath Bose"<<endl;       //Answer
float t16=clock();
clock_t start16=clock();
cout <<"Timer: 30 sec starts"<<endl;
	cout <<"Please enter the input: "<<endl;
	clock_t endwait16;  
    endwait16 =  30000+(int)t16;
	cin>>i;   
if(!kbhit() && clock()>=endwait16){
	cout<<"Times up !"<<endl;
	end(amount);
}else{
	if(i==4){
		cout<<"Congratulations! Your answer is correct. You won Rs. 7,00,00,000"<<endl;
		Sleep(2000);
		amount=70000000;
		system("CLS");
		cout<<"You've succesfully finished the entire game with your mind-blowing intellect and earned Rs. 7 Crore!!!."<<endl;
		Sleep(3000);
		cout<<"Thankyou for taking part in the game."<<endl;
		Sleep(2000);
	}else{
		cout<<"Oops! You lost. Your answer is incorrect. Better luck next time"<<endl;
		end(amount);
	}
}
return 0;
}