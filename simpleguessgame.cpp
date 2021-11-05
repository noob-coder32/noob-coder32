//******** GUESSING GAME*******
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

int guess;
cout<<"This is just a simple guessing game which i just created as an exercise, so please dont judge and also pardon my poor english ://) xp"<<endl;
cout<<endl;
cout<<"the computer is choosing a number between 1 and 10, you will get 5 chances along with hints to guess it right 8-)  let's see how good is your guessing power ";
cout<<endl;
srand(time(0));
int iRand=rand() %9+1;
cout<<"guess any number between 1 and 10: "<< endl;
cout<<"enter your guess"<<endl;
cin>>guess;

for (int a = 5; a>0; a--)
{       
    if(iRand==guess){            
            cout<<"your guess is right :) looks like you are not a bad guesser =D "<<endl;
            break;
    }
                          
    else if (guess>=0 && guess<iRand)
        {
        
            cout<<"Your guess was lower than than the computer's chosen number ;^), you got a hint, try again =) "<<endl<<"you have "<<a<<" "<<"chances left"<<endl;
            cin>>guess;
        }
    else if (guess>iRand && guess<=10){
              
             
            cout<<"Your guess is higher than the computer's chosen number, try again using this hint (^o^)"<<endl<<"you have "<<a<<" "<<"chances left"<<endl;
            cin>>guess;
        }
    
    

    else if(guess<0 || guess>10){
            cout<<"Sorry your input is not within the specified parameters =/.Enter a valid input"<<endl;
            cin>>guess;
            
        }

        
}

  
cout<<endl;
cout<<" Hope you liked my simple game, have a nice day ^_^ "<<endl ;
return 0;
} 