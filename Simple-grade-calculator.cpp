#include<iostream>
using namespace std;
int main(){

  int score;
  char grade;

  cout << "Enter your score :- ";
  cin >> score;

  if(score < 0 || score > 100){
    cout << "Invalid score. Please enter a vale between 0 and 100. " << endl;
    return 1;
  }

  grade = (score >= 90)? 'A':
          (score >= 80)? 'B':
          (score >= 70)? 'C':
          (score >= 60)? 'D': 'F';
  cout << "Your grade is " << grade << endl;

  switch(grade){
    case 'A':
      cout << "Excellent work!" << endl;
      break;
    case 'B':
      cout << "Well done!" << endl;
      break;
    case 'C':
      cout << "Good job!" << endl;
      break;
    case 'D':
      cout << "You passed, but you could do better." << endl;
      break;
    case 'F':
      cout << "Sorry, you failde." << endl;
      break;
    default:
      cout << "Error in grade calculation." << endl;
      break;
  }

  if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'){
    cout << "Congratulations! you are eligible for the next level." << endl;
  }else if (grade == 'F'){
    cout << "Please try again next time." << endl;
  }
  
  return 0;
}