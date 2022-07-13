#include<iostream>

class Student{
  private:
    int marks, id;
    std::string name;
  public:
    Student(int the_id, int the_marks, std::string the_name){
      this->marks = the_marks;
      this->id = the_id;
      this->name = the_name;  
    }
  //mutators
  void set_marks(int the_marks){
    marks = the_marks;
  }
  void set_name(std::string the_name){
    this->name = the_name; 
  }
   void set_id(int the_id){
    this->id = the_id;
  }
//accessors
  int get_marks(){
    return marks;
  }
  int get_id(){
    return id;
  }
  std::string get_name(){
    return name;
  }
// Other meathods
void join_Bakery()
{
  if(marks > 4 && marks < 12)
  {
  std::cout<<"you have joined the Bakery"<<std::endl;

   std::cout<<"How many cakes can you make a day?"<<std::endl;
   int cake_num;
   std::cin>>cake_num;
    if(cake_num >= 5)
    {
    std::cout<<"***You a Graduate cake maker ***"<<std::endl;
      }else
      {
      std::cout<<"You are Dropping out"<<std::endl;
      }
   }
}


/*void repeat_or_exit(int x){
    
     std::cout<<"You have failed Primary 7, Next time input PLE marks-> 4 "<<std::endl;
         std::cout<<"Please Enter 0 to try again or Enter 1 to join the Bakery School:)"<<std::endl;
         int x;
         std::cin>> x;
      
  
         if (x == 0 )
         {
         std::cout<<"program will be exiting..."<<std::endl;
         exit(x);
        }elseif (x == 1)
        {
         join_Bakery();
         
       }
    
}*/

  void dropout_immediately() 
  {
    if(marks > 12)
    {
       std::cout<<"You are Disqualified from this school: sorry about that :( "<<std::endl;
    }
  }



void check_marks(int &the_marks, int &exam_score, int &grad_score)
{
       //validate_PLE_results (the_marks);
     //}
     if(exam_score < 0 && exam_score > 100){
       throw std::invalid_argument( "received invalid value" );
       
       std::cout<<"program will be exiting..."<<std::endl;
       
       exit(exam_score);
     
     }
    if(exam_score >= 75){
      
      std::cout<<"You are have joined Universty"<<std::endl;
    }else{
      std::cout<<"You are Dropping out"<<std::endl;
    }
    
    
    if(grad_score < 0 && grad_score > 100){
       throw std::invalid_argument( "received invalid value" );
    }
    if(grad_score >= 85){

    std::cout<<"***You are Graduating ***"<<std::endl;
    }else{
      std::cout<<"You are Dropping out"<<std::endl;
    }
    
    // } 
  //}
}
//would be nice to choose either bakery or school if once has good marks
void validate_PLE_results (int arks)//Validate should use ifelseto only take one education traight at a time:)
{
  if(arks == 4)
    {
      std::cout<<"joining Secondary School*** H** O** R** E** Y ***"<<std::endl;
      
      int k=0, e=0,  g=0;
      check_marks(k,e,g);
     
    }
    if(arks > 4 && arks <= 12)
    {
        join_Bakery();
         //exit(arks);
      
   //repeat_or_exit();
    }
    if(arks > 12)
    {
    dropout_immediately() ;
    }
}



};

//How do I use this key word to refer to the object returned by a class

int main(){
  //marks will be got from the object
  //for(int i = 1; i < 3; i++){
      std::cout<<"please Enter student Name"<<std::endl;
        std::string name1;
        std::cin>>name1;
      std::cout<<"please Enter student ID"<<std::endl;
        int id1;
        std::cin>>id1;
      std::cout<<"please Enter student PLE Marks"<<std::endl;
        int marks1;
        std::cin>>marks1;
      

    Student Grace = Student(id1, marks1, name1);
    
         //Grace.validate_PLE_results(marks1);
         //std::cout<<marks1<<std::endl;
    

     std::cout<<"Enter your dream exam scores from 0-100"<<std::endl;
     int exam_score1;
     std::cin>>exam_score1; 

     std::cout<<"Enter graduation exam Score 0-100"<<std::endl;
     int grad_score1;
     std::cin>>grad_score1; 

      Grace.check_marks(marks1, exam_score1, grad_score1);
     //Grace.join_Bakery();
     //Grace.dropout_immediately();
     Grace.validate_PLE_results (marks1);

  return 0;
}