#include<iostream>
#include<string>
using namespace std;
class book
{
    protected:
   int price;
   string isbn;//i dont know what isbn
    string title;
    int base;
    public:
   
    virtual void displaydetails()=0;
    virtual void getcategory()=0;
    virtual void settitle(string e)=0;
    virtual void setgenre(string s)=0;
    virtual void setprice(int s)=0;
    virtual void setisbn(string i)=0;
    virtual int getprice()=0;
    virtual string gettitle()=0;
    virtual string getgenre()=0;
    virtual string getsubject()=0;
    virtual int getedition()=0;
    virtual void setsubject(string a)=0;
    virtual void setedition(int a)=0;
    virtual string getisbn()=0;
};
class Fiction_book: public book
{
     string genre;
     public:
   
     Fiction_book(const string n="none",int a=0,string b="none")
     {
         title=n;
         price=a;
       
         isbn=b;
         base=0;
     }
     void setsubject(string s) override {
       cout << "subject is not applicable for Fiction books.\n";
 }
  string getsubject() override {
      return "none";
    }
   void setedition(int a=0) override {
      cout << "edition is not applicable for Fiction books.\n";
  }
  int getedition() override {
  return 0;
   
}
   string gettitle()
   {
       return title;
   }
     void setprice(int a)
     {
        price=a;
     }
     void settitle(string a)
     {
        title=a;
     }
     void setisbn(string a)
     {
       isbn=a;
     }
     void setgenre(string a)
     {
        genre=a;
     }
     string getgenre()
     {
        return genre;
     }
     int getprice()
     {
        return price;
     }
     string getisbn()
     {
        return isbn;
     }
     void displaydetails()override
     {
        cout<<"fiction category"<<"\n";
        cout<<"tittle:"<<title<<"\n";
        cout<<"price:"<<price<<"\n";
        cout<<"isbn:"<<isbn<<"\n";
        cout<<"genre:"<<genre<<"\n";
     }
     void getcategory()
     {
         if(base==0)
         {
            cout<<"fictional book catagory";
         }
     }
     
};
class NonFiction_book:public book
{
     string subject;
     public:
   
     NonFiction_book(const string n="none",int a=0,string b="none")
     {
         title=n;
         price=a;
         isbn=b;
         base=1;
     }
     void setgenre(string s) override {
      cout << "Genre is not applicable for Non-Fiction books.\n";
  }
  string  getgenre() override {
   
   return "none";
  }
  void setedition(int a=0) override {
   cout << "edition is not applicable for Non-Fiction books.\n";
  }
int getedition() override {
     return 0;
 }
     void setprice(int a)
     {
        price=a;
     }
     int getprice()
     {
        return price;
     }
     void settitle(string a)
     {
        title=a;
     }
     string gettitle()
     {
        return title;
     }
     void setsubject(string a)
     {
        subject=a;
     }
     void setisbn(string a)
     {
       isbn=a;
     }
     string getisbn()
     {
        return isbn;
     }
     string getsubject()
     {
        return subject;
     }
    void  displaydetails()override
     {
        cout<<"Nonfiction category"<<"\n";
        cout<<"tittle:"<<title<<"\n";
        cout<<"price:"<<price<<"\n";
        cout<<"isbn:"<<isbn<<"\n";
        cout<<"subject:"<<subject<<"\n";
     }
     void getcategory()
     {
         if(base==1)
         {
            cout<<"nonfictional book catagory";
         }
     }
};
class Reference_book: public book
{
    int  edition;
     public:
   
     Reference_book(const string n="none",int a=0,string b="none")
     {
         title=n;
         price=a;
         isbn=b;
         base=2;
     }
     void setgenre(string s) override {
      cout << "Genre is not applicable for Reference books.\n";
    }
  string  getgenre() override {
   return "none";
    }
    void setsubject(string s) override {
      cout << "Title is not applicable for Reference books.\n";
  }
  string  getsubject() override {
   return "none";
  }
   
     void setprice(int a)
     {
        price=a;
     }
     int getprice()
     {
        return price;
     }
     void setedition(int a)
     {
        edition=a;
     }
     string gettitle()
     {
      return title;
     }
     void settitle(string e)
     {
       title=e;
     }
     string getisbn()
     {
        return isbn;
     }
     void setisbn(string a)
     {
      isbn=a;
     }
     int getedition()
     {
         return edition;
     }
   void   displaydetails()override
     {
        cout<<"Reference category"<<"\n";
        cout<<"tittle:"<<title<<"\n";
        cout<<"price:"<<price<<"\n";
        cout<<"isbn:"<<isbn<<"\n";
        cout<<"edition:"<<edition<<"\n";
     }
     void getcategory()
     {
         if(base==2)
         {
            cout<<"reference book catagory";
         }
     }
};
class library
{
   protected:
   int a;
   int n;
   int c;
   book*b[10];
    public:
    library(int d=0,int e=0,int f=0)//each for types of book
    {
      if(d+e+f<=10){
      a=d;
      n=e;
      c=f;
      }
    }
    void setfiction()
    {
        for(int i=0;i<a;i++)
        {
           b[i]=new Fiction_book();
           cout<<"enter the title:";
           cin.ignore();
           string u;
           getline(cin,u);
           b[i]->settitle(u);
           
           cout<<"enter the genre:";
           string z;
           getline(cin,z);
           b[i]->setgenre(z);
           cout<<"enter the isbn:";
           string f;
           getline(cin,f);
           b[i]->setisbn(f);
           int r;
           cout<<"enter the price:";
           cin>>r;
           b[i]->setprice(r);
           cout<<"\n";
        }
        
    }
    void setNonfiction()
    {
        for(int i=a;i<a+n;i++)
        {
           b[i]=new NonFiction_book();
           cout<<"enter the title:";
           cin.ignore();
           string s;
           getline(cin,s);
          
           b[i]->settitle(s);
           cout<<"enter the subject:";
           string m;
          getline(cin,m);
           b[i]->setsubject(m);
           cout<<"enter the isbn:";
           string g;
           getline(cin,g);
           b[i]->setisbn(g);
           int ad;
           cout<<"enter the price:";
           cin>>ad;
           b[i]->setprice(ad);
           cout<<"\n";
        }
    }
    void setReference()
    {
        for(int i=a+n;i<a+n+c;i++)
        {
           b[i]=new Reference_book();
           cout<<"enter the title:";
           cin.ignore();
           string sn;
           getline(cin,sn);
           
           b[i]->settitle(sn);
           cout<<"enter the edition:";
           int mn;
           cin>>mn;
           b[i]->setedition(mn);
           cout<<"enter the isbn:";
           cin.ignore();
           string gn;
           getline(cin,gn);
           b[i]->setisbn(gn);
           int ab;
           cout<<"enter the price:";
           cin>>ab;
           b[i]->setprice(ab);
           cout<<"\n";
        }
    }
    void searchbytitle(string m)
    {
      int counter=0;
         for(int i=0;i<a+c+n;i++)
         {
            string r=b[i]->gettitle();
            if(r==m)
            {
               b[i]->displaydetails();
               break;
            }
         }
         if(counter==0)
         {
           cout<<"no book is available in the given price range";
         }
    }
    void pricerange(int min,int max)
    {
      int counter=0;
       for(int i=0;i<a+c+n;i++)
       {
         int pr=b[i]->getprice();
         if(pr>=min && pr<=max)
         {
             b[i]->displaydetails();
             cout<<"\n";
            counter++;
         }
         
       }
       if(counter==0)
       {
         cout<<"no book is available in the given price range";
       }
    }
    void displaycategories()
    {
        cout<<"Fictional books"<<a<<"\n";
        cout<<"NonFictional books"<<n<<"\n";
        cout<<"Reference books"<<c<<"\n";
    }
    void serchbyisbn(string am)
    {
      for(int i=0;i<a+c+n;i++)
      {
         string is=b[i]->getisbn();
         if(is==am)
         {
            b[i]->displaydetails();
            break;
         }
      }
    }
    void searchbypartialnames(string m)
    {
       //first change all caps into small for each checking;
        for(int i=0;i<a+c+n;i++)
        {
            string sm=b[i]->gettitle();
            //change it into all small letters;
            int size=sm.size();
            int cou=0;
            while(sm[cou]!='\0')
            {
              int ascii=sm[cou];
              if(ascii>=65 && ascii<=90)
              {
                 ascii-=32;
                 sm[cou]=ascii;
              }
              cou++;
            }
            int com=0;
            //so everything has changed into small caps;
            int bs=0;
            while(com<=a+c+n)
            {
                  for(int j=0;j<m.size();j++)
                  {
                     while(sm[com]!='\0')
                     {
                        if(sm[com]==m[j])
                        {
                          bs++;
                        }
                        com++;
                     }

                  }
                if(bs==m.size())
                {
                  cout<<sm;
                }
            }
        }
    }
    ~library() {
      for (int i = 0; i < a + n + c; i++) {
          delete b[i];
      }
  }
};

int main()
{
  library store(2,3,5);
 
  store.setfiction();
  store.setNonfiction();
  store.setReference();
  while(1)
  {
     cout<<"press 1: if you want search by isbn"<<"\n";
     cout<<"press 2:if you want to partial search four your book title"<<"\n";
     cout<<"press 3:if you want to search books in the price range"<<"\n";
     cout<<"press 4:if you want to search books by title:"<<"\n";
     cout<<"press 5:if you want to get the categories of books"<<"\n";
     cout<<"press 6:if you want to exit"<<"\n";
     int choice;
     cin>>choice;
     switch(choice)
     {
        case 1:
        {
        cout<<"search by isbn";
        cin.ignore();
        string abn;
        getline(cin,abn);
        store.serchbyisbn(abn);
        break;
        }
        case 2:{
        cout<<"search by partial";
        string abv;
        cin.ignore();
        getline(cin,abv);
        store.searchbypartialnames(abv);
        break;}
        case 3:{
        cout<<"search books in price range:";
        int min_pri;
        int max_pri;
        cin>>min_pri>>max_pri;
        store.pricerange(min_pri,max_pri);
        break;}
        case 4:{
        cout<<"search by title:";
        cin.ignore();
        string tit;
        getline(cin,tit);
        store.searchbytitle(tit);
        break;}
         case 5:{
          cout<<"display details";
          store.displaycategories();
          break;}
          case 6:{
          cout<<"escape interface";
          return 0;}
          default:{
          cout<<"invalid choice try again";
          }
     }
  }
   return 0;
}
