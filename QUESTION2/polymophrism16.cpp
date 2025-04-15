// 3.16 Suppose that we want a class that can be used to represent people at a university (e.g., faculty, staff, undergrad
//     uate students, and graduate students). For all types of people, we want to record their name and university ID.
//      For specific types of people, we want to record some additional information. In the case of faculty, we want to
//      record their rank (i.e., Assistant Professor, Associate Professor, or Full Professor). In the case of undergraduate
//      students, we want to record their year of study (i.e., 1, 2, 3, or 4). In the case of graduate students, we want
//      to record their supervisor’s university ID. Suggest a class hierarchy that might be used to represent the above
//      collection of people. You do not need to fully implement the class.


//    answer


#include <iostream>
#include <string>
using namespace std;

class University{
    public:
    string rank;
    int year;
    int id;

    string faculty(){
      string rank =( " Assistant "," Assocaite Proffessor "," Full Proffessor ");
      cout<<rank<<endl;
      return rank;

    }

    int undergraduate(){
        int year=(1,2,3, 4);
        cout<<year<<endl;
        return year;

    }

    int universityID(){

        int id;
        cout<<"Enter your id : ";
        cin>>id;

        return id;


    }



};


int main(){
 University university;

 university.faculty();
 university.undergraduate();
 university.universityID();

 cout<< "faculty is :\n"<<university.faculty()<<endl;
 cout<<"undergraduate is :\n"<<university.undergraduate()<<endl;
 cout<< " the year is : \n"<< university.universityID()<<endl;


}