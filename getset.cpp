#include <iostream>
using namespace std;

class Movie{
  private:
    string rating;  //since rating is private so we can't set the rating from Movie object
  public:
    string title;
    string director;
          
    Movie(string atitle, string adirector, string arating){
      title= atitle;
      director= adirector;
      setrating(arating);
    }

    void setrating(string arating){
      rating = arating;
      if(arating == "G" || arating == "PG" || arating == "PG-13" || arating == "NR")
      {
        rating = arating;
      }
      else
      {
        rating = "NR";
      }
    }

    string getRating(){
    return rating;
    }

};

int main()
{
  Movie avengers("The Avengers","Joss Whedon","PG-13");
  cout << avengers.getRating();
  return 0;
<<<<<<< HEAD
}
=======
} 
>>>>>>> master
