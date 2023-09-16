#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int glob=0; //global variables, for domestic count
int global=10;     // for international count

struct node2
{

    int pnr;
    string doj;
    int src;
    int dest;
    string f;
    string tojd;
    string toja;

    node2* forward;
};

node2* store_ptr =NULL;

class booking
{

public:
    int j_detail() // function declaration and definition for domestic journey
    {
        node2* temp;     // creates node type of pointer temp
        temp = new node2;      // (pointing address to un-named object of type node) 
        cout << "Choose Source and Destination\n";
        cout << "\1.Brisbane(1) \t\2.Sydney(2) \t\3.Melbourne(3) \t\4.Canberra(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> temp->src;
        cout << "\tEnter destination" << endl;
        cin >> temp->dest;

        //conditions

        if ((temp->src == 1 && temp->dest == 2) || (temp->src == 2 && temp->dest == 1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if ((temp->src == 1 && temp->dest == 3) || (temp->src == 3 && temp->dest == 1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if ((temp->src == 1 && temp->dest == 4) || (temp->src == 4 && temp->dest == 1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.4000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.4250\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6100\t\tRefundable\n";
        }

        else if ((temp->src == 2 && temp->dest == 3) || (temp->src == 3 && temp->dest == 2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
        }

        else if ((temp->src == 2 && temp->dest == 4) || (temp->src == 4 && temp->dest == 2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.4500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if ((temp->src == 3 && temp->dest == 4) || (temp->src == 4 && temp->dest == 3))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5800\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.5508\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6050\t\tRefundable\n";
        }
        else if (temp->src == temp->dest)//condition
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();        //startover with the valid date
        }
        else
        {
            cout << "\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();         //startover with the valid date
        }
        temp->forward = NULL;
        system("pause");
        store_ptr = temp;
    }

    int j_detail2()    // function declaration and definition for journey details
    {
        node2* temp;     // creates node type of pointer temp
        temp = new node2;      // (pointing address to un-named object of type node) 
        cout << "Choose source and Destination"<<endl;
        cout << "\1.London(1) \2.Dubai(2) \3.Abu Dhabi(3) \4.Singapore(4) \5.NewYork(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> temp->src;
        cout << "\nEnter destination";
        cin >> temp->dest;
        cout << "\t \t \tFlights Found" << endl << endl;

        if ((temp->src == 1 && temp->dest == 3) || (temp->src == 3 && temp->dest == 1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
        }

        else if ((temp->src == 1 && temp->dest == 4) || (temp->src == 4 && temp->dest == 1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }

        else if ((temp->src == 1 && temp->dest == 5) || (temp->src == 5 || temp->dest == 1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
        }

        else if ((temp->src == 2 && temp->dest == 3) || (temp->src == 3 && temp->dest == 2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
        }

        else if ((temp->src == 2 && temp->dest == 4) || (temp->src == 4 && temp->dest == 2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs41259\tRefundable\n";
        }

        else if (temp->src == 2 && temp->dest == 5 || (temp->src == 5 && temp->dest == 2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs81478\tRefundable\n";

        }
        else if (temp->src == temp->dest)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n" << endl;
            return j_detail2();
        }
        else//condition
        {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detail2();
        }
        temp->forward = NULL;
        system("pause");
        store_ptr = temp;
    }
};


    
class d_booking   : public booking            //class  for domestic booking
{
protected:
    int choice;
public://public member functions

    void d_pnr()         // function for storing domestic pnr
    {   
        node2* temp;     // creates node type of pointer temp
        temp = new node2;      // (pointing address to un-named object of type node)  
        temp->pnr = glob;
        temp->pnr++;
        store_ptr= temp;
    }


    int j_detail_d() // function declaration and definition for domestic journey
    {
        booking::j_detail();
        return 0;
    }

    int  select_flight()           //function declaration and definition for selecting flight
    {
        node2* temp;     // creates node type of pointer temp
        temp = new node2;      // (pointing address to un-named object of type node)  
        cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1:    //condition
                cout << "\nFlight selected: 1"<<endl;
                cout <<endl;
                temp->f = "Qantas";
                
                temp->tojd = "08:00";
               
                temp->toja = "11:05";
                cout << endl;
                break;
          case 2://condition
                cout << "\nFlight selected: 2"<<endl;
                cout << endl;
                temp->f = "Fly Dubai";
                
                temp->tojd = "14:00";
              
                temp->toja = "17:05";
                cout << endl;
                break;
          case 3://condition
                cout << "\nFlight selected: 3" << endl;
                cout << endl;
                temp->f = "Go Air";
             
                temp->tojd = "19:00";
             
                temp->toja = "22:05";
                cout << endl;
                break;
          default:     //condition
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." << endl;
        cin.ignore();
        getline(cin, temp->doj);
        glob++;
        temp->pnr = glob;
        temp->forward = NULL;
        store_ptr = temp;
    }
};

class i_booking     : public booking         //class for international booking
{
protected://protected members
  int choicei;       // source international, destination international, choice international

public://public member functions
    void i_pnr()             // function for storing pnri
    {
        node2* temp;     // creates node type of pointer temp
        temp = new node2;      // (pointing address to un-named object of type node)  
        temp->pnr = global;
        temp->pnr++;
        store_ptr = temp;
    }
   
    int j_detail_i()    // function declaration and definition for journey details
    {   

        booking::j_detail2();
        return 0;

    }

    int select_flight_i()//function declaration and definition for selecting flight
    {   
        node2* temp;     // creates node type of pointer temp
        temp = new node2;      // (pointing address to un-named object of type node)  

        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)//switch case
        {
        case 1://condition
            cout << "\nFlight selected: 1" <<endl;
            cout << endl;
            temp->f = "Vistara";
         
            temp->tojd = "10:00";
        
            temp->toja = "14:05";
            cout << endl;
            break;
        case 2://condition
               cout << "\nFlight selected: 2" << endl;
               cout << endl;
               temp->f = "Fly Dubai";
            
               temp->tojd = "14:00";
           
               temp->toja = "18:05";
               cout << endl;
                break;
        case 3://condition
            cout << "\nFlight selected: 3" << endl;
            cout << endl;
            temp->f = "Emirates";
       
            temp->tojd = "18:00";
     
            temp->toja = "22:05";
            cout << endl;
            break;
        default://condition
            cout << "Wrong input entered" << endl;
            return select_flight_i();
        }
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." << endl;
        cin.ignore();
        getline(cin, temp->doj);
        glob++;
        temp->pnr = glob;
        temp->forward = NULL;
        store_ptr = temp;
    }
};


class passenger: public d_booking, public i_booking       //class passenger publicly inherited from class d_booking and i_booking
{
protected:                          //protected members
    char f_name[20],l_name[20],email[50];    // first name , last name, email
    int age,gender;
    long int c_no;        // contact no

public:     //public member functions
    void p_detail(int x)        //function declaration and definition
    {   if(x==1)//if else for domestic and international booking selection
        { j_detail_d();//function call
          select_flight();//function call
        }
          else
          {  j_detail_i();//function call1353
             select_flight_i();//function call
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }

    int gender_check()     //to check gender input as valid
    {
        cout << "\nGender:\nFor Male-press:1::\nFor Female-press:2::\n";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();        //function call (start over to gender check)
        }
    }
       void more_details()    //to take more details of the passenger
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(6 digits):";
        cin >> c_no;

                //displaying details
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;     
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
       }

     void disp()        //function to display details for domestic booking
     {   
         fstream myticket;
         myticket.open("Ticket.txt", ios::out);
         cout << "\n" << "\n";
         node2* temp;     // creates node type of pointer temp
         temp = new node2;      // (pointing address to un-named object of type node)  
         temp = store_ptr;

         if (myticket.is_open())
         {
             cout << "PNR:"; cout << temp->pnr << endl;
             myticket << "PNR:"<< temp->pnr << endl;
             cout << "Flight:"; cout << temp->f << endl;
             myticket<< "Flight:"<< temp->f << endl;
             cout << "Name:" << f_name << " " << l_name << endl;
             myticket << "Name:" << f_name << " " << l_name << endl;
             cout << "DOJ:"; cout << temp->doj << endl;
             myticket << "DOJ:"<< temp->doj << endl;
             cout << "Departure Time:"; cout << temp->tojd << endl;
             myticket << "Departure Time:" << temp->tojd << endl;
             cout << "Arrival Time:"; cout << temp->toja;
              myticket<< "Arrival Time:" << temp->toja;
              myticket.close();
         }
         cout << "\n" << "\n";
         system("pause");
        
     }

      void dispi()       //function to display details for international booking
     {
          fstream myticket;
          myticket.open("Ticket.txt", ios::out);
          cout << "\n" << "\n";
          node2* temp;     // creates node type of pointer temp
          temp = new node2;      // (pointing address to un-named object of type node)  
          temp = store_ptr;

          if (myticket.is_open())
          {
              cout << "PNR:"; cout << temp->pnr << endl;
              myticket << "PNR:" << temp->pnr << endl;
              cout << "Flight:"; cout << temp->f << endl;
              myticket << "Flight:" << temp->f << endl;
              cout << "Name:" << f_name << " " << l_name << endl;
              myticket << "Name:" << f_name << " " << l_name << endl;
              cout << "DOJ:"; cout << temp->doj << endl;
              myticket << "DOJ:" << temp->doj << endl;
              cout << "Departure Time:"; cout << temp->tojd << endl;
              myticket << "Departure Time:" << temp->tojd << endl;
              cout << "Arrival Time:"; cout << temp->toja;
              myticket << "Arrival Time:" << temp->toja;
              myticket.close();
          }
          cout << "\n" << "\n";
          system("pause");
     }
};



class payment          //class for payment
{
protected:    //protected members
    long
    int choice1,bank,card,date,cvv,user_id;    
    char password[10];
public:         //public members functions
    void pay_detail()//function declaration and definition for payment method
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available: \1.West Pac Bank(1) \2.Nabil Bank(2) \3.Standard Chartered Bank(3) \4.AMP Bank(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};


void cancelticket(int x)
{
    passenger p;
    node2* temp;
    node2* q;


    if (store_ptr == NULL)
        cout << "cannot delete from empty list";
    else

    {
        if (store_ptr->pnr == x)
        {
            q = store_ptr;
            store_ptr = store_ptr->forward;
            delete q;       //deletes q
            cout << "The Complaint is Cancelled Successfully" << endl;
        }
        else
            cout << "wrong ticket number";
    }
}



void checkticket(int x)
{
    passenger p;
    node2* temp;

    temp = store_ptr;

    if (store_ptr == NULL)
        cout << "cannot delete from empty list";
    else
    {
        if (store_ptr->pnr == x)
        {
            cout << "PNR:"; cout << temp->pnr << endl;

            cout << "Flight:"; cout << temp->f << endl;

            cout << "DOJ:"; cout << temp->doj << endl;

            cout << "Departure Time:"; cout << temp->tojd << endl;

            cout << "Arrival Time:"; cout << temp->toja;

        }
        else
            cout << "wrong ticket number";

    }
}



int main()          //main function
{

     d_booking d1;       //object for class d_booking
     i_booking i1;      //object for class i_booking
     passenger p1;     //object for class passenger
     payment p2;      //object for class payment
    int ch,ch1,n;         //integer variables            ch for choosing what to do(like booking), ch1 for choosing between domestic and international  
    char input;          //character variables

    do                  //do while loop (works atleast one)
    {
    	system("CLS");
    cout << "\n\n \t\tWelcome To Flight Reservation System" << endl << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Book your Flight tickets at affordable prices!" << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>";
    
    cout << "\n\n\t\t\t Book Flight(1) \n\t\t\t Cancel Fight(2) \n\t\t\t Check Ticket(3) \n\t\t\t Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)          //switch case
      {
          case 1:        //condition
          system("CLS");
              cout << "\n\n\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)    //inner switch case
              {
                   case 1://for booking domestic ticket
                        //p1.d_pnr();
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        //call to create file
                        break;
                   case 2: //for booking international ticket
                          // p1.i_pnr();
                           p1.p_detail(2);//function calls
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           //call to create file
                           break;
                   default://wrong input
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              //for canceling ticket
              system("CLS");
              cout << "\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticket(n);//function call for international cancellation
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:   //for displaying booked ticket details
          system("CLS");
                  cout << "\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;

                  if(ch1==1)
                  {
                      cout << "Please enter your PNR no.:" << endl;
                      cin>>n;
                     checkticket(n);
                  }             //function call to display domestic ticket details
                  else if(ch1==2)
                  {  
                      cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticket(n);   //function call to display international ticket details
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			return 0; 
          default://for wrong input
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');                 //condition for do while loop
return 0;
}

