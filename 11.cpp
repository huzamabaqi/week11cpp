#include<iostream>
#include<math.h>
#include<string>

using namespace std;


double add(){
    double a[2];
    int s;
    double b;
    
    int k;
    
    
 cin>>a[2]>>b;

  double sum = a[2]+b;
  

  return sum;
  }

double sub(){
    double a[2];
    double b;
    
    cin>>a[2]>>b;


   double subtract = a[2]-b;
   

return subtract;

}

double multi(){
    double a[2];
    int s;
    double b;
    
    int k;
    
    
        cin>>a[2]>>b;
    

    

   double multiply = a[2]*b;
   

return multiply;
}

double div(){
    double a[2];
    int k;
    int s;
    double b;
    
    cin>>a[2]>>b;
 

  double  divide = a[2]/b;
  

return divide;
}

double sqr(){
    double a[2];
    int s;

    int k;
    
    cin>>a[2]; 

  double  answer = sqrt(a[2]);
  

return answer;
}

double exponent(){
    double a[2];
    int s;
    
    double b;
    int k;
    cin>>a[2]>>b;
 

   double expo = pow(a[2],b);
   

return expo;
}
double exit()
{
    return 0;
}

void firstfunc(){
    cout << "Choose what you would like to do:" << endl;  
    cout << "1) Add" <<endl;
    cout << "2) Subtract" << endl;
    cout << "3) Multiply" << endl;
    cout << "4) Divide" << endl;
    cout << "5) Square Root" << endl;
    cout << "6) Exponent " << endl;
}

void secondfunc(int opt){               
    if (opt == 1){
        cout << "Which numbers do you want to add?" << endl;
    }
    else if (opt == 2){
        cout << "Which numbers do you want to subtract?" << endl;
    }
    else if (opt == 3){
        cout << "Which numbers do you want to multiply?" << endl;
    }
    else if (opt == 4){
        cout << "Which numbers do you want to divide?" << endl;
    }
    else if (opt == 5){
        cout << "Which Number do you want to square root?" << endl;
    }
    else if (opt == 6){
        cout << "Enter Base? Which Power?" << endl;
    }
    else{
        cout << "Please Enter valid numbers!" << endl;
        
        
    }
}

int main(){
     double x[2];
    double a[2],b; 

    while (1 == 1){  
        
        firstfunc();    
        cin >> x[2];

        secondfunc(x[2]);

        
        
    

        if(x[2] == 1){
            cout << "Your addition is: " <<add() << endl;    
        }
        else if(x[2] == 2){
            cout << "Your subtraction is: " <<sub() << endl;
        }
        else if(x[2] == 3){
            cout << "Your multiplication is: " <<multi() << endl;
        }
        else if(x[2] == 4){
            cout << "Your division is: " <<div() << endl;
        }
        else if(x[2] == 5){
            cout << "Your square root is: " <<sqr() << endl;
        }
        else if(x[2] == 6){
            cout << "Your exponent is: " <<exponent() << endl;
        }
        else{
            cout << "Please enter a valid choice." <<exit()<< endl;
            
        }

    }


return 0;
}