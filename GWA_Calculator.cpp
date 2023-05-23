/*
 *
 * Copyright (c) 2023 Raver B. Miradora (Raver-Miradora.github.io). All Rights Reserved.
 *
 * License under the GNU General Public License, version 3.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://github.com/Raver-Miradora/Menu-driven-program-for-BSIT-student-grades/blob/main/LICENSE
 *
 * Unless required by the applicable law or agreed in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

char displayMenu();
void gwaCalculator();
void gwaConverter();
void displayGwaEquiv();

int main(){
    char ch;
    while(ch != 'E' && ch != 'e'){
      ch = displayMenu();
      switch(ch){
        case 'a':
        case 'A':
            cout << endl;
            gwaCalculator();
            break;
        case 'B':
        case 'b':
            gwaConverter();
            break;
        case 'c':
        case 'C':
            displayGwaEquiv();
            break;
        case 'E':
        case 'e':
            cout << "\nTerminating Program........" << endl;
            break;
        default:
            cout << "Invalid Input!!" << endl << endl;
            break;
      }
    }

    return 0;
}
char displayMenu(){
    char c;
    cout << "-------------------------------------------\n";
    cout << "MENU DRIVEN PROGRAM FOR BSIT STUDENT GRADES";
    cout << "\n-------------------------------------------"
        << endl
        << "[A] GWA Calculator\n"
        << "[B] GWA to Grade Equivalent\n"
        << "[C] Display GWA Equivalents\n"
        << "[E] Exit\n"
        << "Enter your choice: ";
    cin >> c;
    return c;
}
void gwaCalculator(){
    int subjects = 8;
    double units = 23.0, grades[subjects];
    string subject_codes[] = {"NSTP2", "HCI1", "MS1", "CC3", "GE4", "GE5", "GEE2", "PE2"};
    double course_units[] = {3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 2.0};

    cout << "---------"
        << "GWA CALCULATOR"
        << "-----------";

    cout << endl << endl;
    char choice;
    do{
        cout << "Enter Your Grades(decimal) in the following Course/Subject\n";
        for(int i = 0; i < subjects; i++){
        cout << subject_codes[i] << ": ";
        cin >> grades[i];
        }
        double productGrades[8], sumPG = 0.0;
        for(int i = 0; i < subjects; i++){
            productGrades[i] = grades[i] * course_units[i];
            sumPG+=productGrades[i];
        }
        double gwa = sumPG / units;
        cout << "Your General Weighted Average(GWA) is: "
            << fixed << showpoint << setprecision(2) << gwa << endl;

        cout << "\nWant to Calculate again(Y/N)?: ";
        cin >> choice;
        cout << endl;

    }while(choice != 'N' && choice != 'n');

    cout << "Returning to the menu......" << endl << endl;

}
void gwaConverter(){
    double gwa = 0.0;

    cout << "\n---------"
        << "GWA TO GRADE EQUIVALENT"
        << "----------"
        << endl << endl;

    char choice;
    do{
        cout << "Enter Your General Weighted Average(GWA): ";
        cin >> gwa;

        if (gwa == 1.0 || gwa == 1){
            cout << "Equivalent Grade: 99" << endl;
        }
        else if(gwa >= 1.1 && gwa <= 1.19){
            cout << "Equivalent Grade: 98" << endl;
        }
        else if (gwa >= 1.20 && gwa <= 1.24){
            cout << "Equivalent Grade: 97" << endl;
        }
        else if (gwa >= 1.25 && gwa <= 1.29){
            cout << "Equivalent Grade: 96" << endl;
        }
        else if (gwa >= 1.3 && gwa <= 1.39){
            cout << "Equivalent Grade: 95" << endl;
        }
        else if (gwa >= 1.4 && gwa <= 1.49){
            cout << "Equivalent Grade: 94" << endl;
        }
        else if (gwa >= 1.5 && gwa <= 1.59){
            cout << "Equivalent Grade: 93" << endl;
        }
        else if (gwa >= 1.6 && gwa <= 1.69){
            cout << "Equivalent Grade: 92" << endl;
        }
        else if (gwa >= 1.7 && gwa <= 1.74){
            cout << "Equivalent Grade: 91" << endl;
        }
        else if (gwa >= 1.75 && gwa <= 1.79){
            cout << "Equivalent Grade: 90" << endl;
        }
        else if (gwa >= 1.8 && gwa <=1.89){
            cout << "Equivalent Grade: 89" << endl;
        }
        else if (gwa >= 1.9 && gwa <= 1.99){
            cout << "Equivalent Grade: 88" << endl;
        }
        else if (gwa == 2.0 || gwa == 2){
            cout << "Equivalent Grade: 87" << endl;
        }
        else if (gwa >= 2.1 && gwa <= 2.19){
            cout << "Equivalent Grade: 86" << endl;
        }
        else if (gwa >= 2.2 && gwa <= 2.24){
            cout << "Equivalent Grade: 85" << endl;
        }
        else if (gwa >= 2.25 && gwa <= 2.29){
            cout << "Equivalent Grade: 84" << endl;
        }
        else if (gwa >= 2.3 && gwa <= 2.39){
            cout << "Equivalent Grade: 83" << endl;
        }
        else if (gwa >= 2.4 && gwa <= 2.49){
            cout << "Equivalent Grade: 82" << endl;
        }
        else if (gwa >= 2.5 && gwa <= 2.59){
            cout << "Equivalent Grade: 81" << endl;
        }
        else if (gwa >= 2.6 && gwa <= 2.69){
            cout << "Equivalent Grade: 80" << endl;
        }
        else if (gwa >= 2.7 && gwa <= 2.74){
            cout << "Equivalent Grade: 79" << endl;
        }
        else if (gwa >= 2.75 && gwa <= 2.79){
            cout << "Equivalent Grade: 78" << endl;
        }
        else if (gwa >= 2.8 && gwa <= 2.89){
            cout << "Equivalent Grade: 77" << endl;
        }
        else if (gwa >= 2.9 && gwa <= 2.99){
            cout << "Equivalent Grade: 76" << endl;
        }
        else if (gwa == 3.0 || gwa == 3){
            cout << "Equivalent Grade: 75" << endl;
        }else{
            cout << "Equivalent Grade: 74 & Below" << endl;
        }
        cout << endl;
        cout << "Want to convert again(Y/N)?: ";
        cin >> choice;
        cout << endl;

    }while(choice != 'N' && choice != 'n');
    cout << "Returning to the menu......" << endl << endl;
}

void displayGwaEquiv(){
    cout << "\n----------"
        << "EQUIVALENT GRADE"
        << "----------"
        << endl << endl;

    cout << "99 = 1.0 \t 84 = 2.25" << endl
        << "98 = 1.1 \t 83 = 2.3" << endl
        << "97 = 1.20 \t 82 = 2.4" << endl
        << "96 = 1.25 \t 81 = 2.5" << endl
        << "95 = 1.3 \t 80 = 2.6" << endl;
    cout << "94 = 1.4 \t 79 = 2.70" << endl
        << "93 = 1.5 \t 78 = 2.75" << endl
        << "92 = 1.6 \t 77 = 2.8" << endl
        << "91 = 1.70 \t 76 = 2.9" << endl
        << "90 = 1.75 \t 75 = 3.0" << endl;
    cout << "89 = 1.8 \t 74 & Below = 5.0" << endl
        << "88 = 1.9 \t Incomplete = INC" << endl
        << "87 = 2.0" << endl
        << "86 = 2.1" << endl
        << "85 = 2.20" << endl;
    cout << endl << "Returning to the Menu......" << endl << endl;
}
