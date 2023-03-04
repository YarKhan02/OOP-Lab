#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movie{
    private:
        string title, studio, rating;

    public:
        Movie(string Title, string Studio, string Rating){
            title = Title;
            studio = Studio;
            rating = Rating;
        }

        Movie(string Title, string Studio){
            title = Title;
            studio = Studio;
            rating = "PG";
        }

        string getTitle(){
            return title;
        }

        string getStudio(){
            return studio;
        }

        string getRating(){
            return rating;
        }

        static vector<Movie> getPG(Movie* movies){
            vector<Movie> pgMovies;

            for (int i = 0; i < 4; i++){
                if (movies[i].rating == "PG"){
                    pgMovies.push_back(movies[i]);
                }
            }

            return pgMovies;
        }
};

int main(){
    Movie movies[] = {
        Movie("Don", "Studio1", "PG-13"),  
        Movie("Pathaan", "Studio2"),
        Movie("Kabhi Khushi Kabhi Gham", "Studio3", "R"),
        Movie("DDLJ", "Studio4"),
    };

    vector<Movie> pgMovies = Movie::getPG(movies);

    for (int i = 0; i < 4; i++) {
        cout << pgMovies[i].getTitle() << " (" << pgMovies[i].getStudio() << ")" << endl;
    }
}
