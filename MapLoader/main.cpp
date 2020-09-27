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
    Continent(int id, string name, int size, string color);
    void print();

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    int getSize() const;

    void setSize(int size);

    const string &getColor() const;

    void setColor(const string &color);

public:
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

Continent::Continent(int id, string name, int size, string color){
    id = id;
    name = name;
    size = size;
    color = color;
};

int Continent::getId() const {
    return id;
}

void Continent::setId(int id) {
    Continent::id = id;
}

const string &Continent::getName() const {
    return name;
}

void Continent::setName(const string &name) {
    Continent::name = name;
}

int Continent::getSize() const {
    return size;
}

void Continent::setSize(int size) {
    Continent::size = size;
}

const string &Continent::getColor() const {
    return color;
}

void Continent::setColor(const string &color) {
    Continent::color = color;
}

void Continent::print(){
    cout << id;
    cout << name;
    cout << size;
    cout << color;
};



Territory::Territory(int id, std::string name, int contId, int x, int y){
    id = id;
    name = name;
    contId = contId;
    x = x;
    y = y;
};


vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}
/*
int main() {
    string str = "adsf+qwer+poui+fdgh";
    vector<string> v = split (str, '+');

    for (auto i : v) cout << i << endl;

    return 0;
}*/


/*
int main( )
{
    std::ifstream input;
    input.open("solar.map");
    if (input.fail( ))
    {
        std::cout << "Input file opening failed.\n";
        exit(1);
    }

    std::stringstream ss;
    ss.str("");
    ss.clear();

    std::string s;
    std::string next;
    while (std::getline(input,s, '\n') ){
        ss << s;
    };

    string str = ss.str();
    vector<string> v = split (str, '\n');

    for (auto i : v) cout << i << "\n";

    return 0;

}
*/

int main( )
{
    std::ifstream input;
    input.open("test.map");
    if (input.fail( ))
    {
        std::cout << "Input file opening failed.\n";
        exit(1);
    }

    std::stringstream ss;
    std::string s;
    while (std::getline(input,s) ){
        ss << s << "\n";
    };

    vector<string> v = split (ss.str(), '\n');
    vector<Continent> continents;
    bool flag;
    string item;

    int id = 1;
    std::string name;
    int size;
    std::string color;
    for (int i = 0; i < v.size(); i++){
        item = v[i];
        if (item.length() > 1 && item.at(0) == ';')
            continue;
        if (flag) {
            std::stringstream cc;
            cc << item;
            cc >> name;
            cc >> size;
            cc >> color;
            continents.push_back(Continent(id, name, size, color));
            id++;

        }
        if (item == "[continents]")
            flag = true;
    };

    for (int i= 0; i < continents.size(); i++){
        cout << continents[i].color;
    };


    return 0;

}