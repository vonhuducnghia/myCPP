#include <iostream>
#include <list>
#include <string>
using namespace std;

class YoutubeChannels
{
    public:
    string Name;
    string OwnerName;
    int SubcribersCount;
    list<string> PublishedVideos; // Make a list of string (or any list of data type), ex: {"name1", "name2", "etc"}
};

int main()
{
    YoutubeChannels myChannels;
    myChannels.Name = "IreneAdler";
    myChannels.OwnerName = "Nghia";
    myChannels.SubcribersCount = 39;
    myChannels.PublishedVideos = {"LoL", "Overwatch", "CS:GO"};
    cout << "Name: " << myChannels.Name << endl;
    cout << "Playlist: ";
    for (string Playlist : myChannels.PublishedVideos) // Syntax to display an object list
    {
        cout << Playlist << '\t';
    }
    //system("pause > 0");
}