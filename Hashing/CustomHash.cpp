#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string firstname;
    string lastname;
    string rollno;

    Student(string f, string l, string r)
    {
        firstname=f;
        lastname=l;
        rollno=r;
    }
    bool operator == (const Student &s) const
    {
        return rollno==s.rollno?true:false;
    }
};

class Hashfn
{
    public:
    size_t operator()(const Student &s) const{
        return s.firstname.length()+s.lastname.length();
    }
};

int main()
{
    unordered_map<Student,int,Hashfn>student_map;
    Student s1("Sristi", "Sharma", "111");
    Student s2("Shwarma", "Sharma", "100");
    Student s3("Pulkit", "Samrat", "071");
    Student s4("Sristi", "Sharma", "999");
    student_map[s1]=45;
    student_map[s2]=87;
    student_map[s3]=99;
    student_map[s4]=100;

    for(auto s: student_map)
    {
        cout<<s.first.firstname<<" "<<s.first.rollno<<" Marks: "<<s.second<<endl;
    }
}