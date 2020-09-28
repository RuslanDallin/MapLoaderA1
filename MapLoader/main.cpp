#include <fstream>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Continent{
public:
    Continent(int idPar, string namePar, int sizePar, string colorPar);
    static vector<Continent> extractContinents(const vector<string> &vParm);
    friend std::ostream& operator<<(std::ostream &strm, const Continent &a);

private:
    int id;
    std::string name;
    int size;
    std::string color;

};

class Territory {
public:
    Territory(int id, std::string name, int contId, int x, int y);
private:
    int id;
    std::string name;
    int contId;
    int x;
    int y;
};

/*
Map::addContinent(const std::string& name)
Map::addTerritory(int id, const std::string& name, int continentId)
Map::connectTerritories(int territory1, int territory2)
Add all the continents and then add all the countries (do this by clicking the "Add" button on the Map editor views window)
Move all the countries to where they are located on the image (use the move tool and simply drag them)
Use the join tool to join 2 countries together, do this for all neighbouring countries (to select none use right click).*/

Continent::Continent(int idPar, string namePar, int sizePar, string colorPar){
    id = idPar;
    name = namePar;
    size = sizePar;
    color = colorPar;
}

vector<Continent> Continent::extractContinents(const vector<string> &v) {
    cout << "extraction continents\n";
    vector<Continent> continents;
    bool flag;
    string first;
    string item;

    int id = 1;
    std::string name;
    int size;
    std::string color;
    for (int i = 0; i < v.size(); i++){
        std::stringstream line;
        line << v[i];
        line >> first;
        //if (first.length() > 1 && first.at(0) == ';')
        if (v[i].at(0) == ';' || v[i].at(0) == '\r' || v[i].at(0) == '\n')
            continue;
        if (flag && first == "[countries]")
            break;
        if (flag) {
            std::stringstream cc;
            cc << v[i];
            cc >> name;
            cc >> size;
            cc >> color;
            continents.push_back(Continent(id, name, size, color));
            id++;
        }
        if (first == "[continents]")
            flag = true;
    }
    cout << continents.size() << " extracted\n";
    //for (auto i : continents) { cout << i.color << " , ";}
    return continents;
}

std::ostream& operator<<(std::ostream &strm, const Continent &a) {
    return strm << "[ " << a.id << " " << a.name << " " << a.size << " " << a.color << " ]";
}

vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}


int main( )
{
    std::ifstream input;
    input.open("europass.map");
    if (input.fail( ))
    {
        std::cout << "Input file opening failed.\n";
        exit(1);
    }

    std::stringstream ss;
    std::string s;
    while (std::getline(input,s) ){
        ss << s << "\n";
    }


    vector<string> v = split (ss.str(), '\n');
    vector<Continent> vectorCont = Continent::extractContinents(v);
    for (auto i : vectorCont) { cout << i << " \n";}



    return 0;

}