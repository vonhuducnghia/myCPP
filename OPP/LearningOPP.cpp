#include <iostream>
#include <list>
#include <string>
using namespace std;

class YoutubeChannels
{
    private:
    string Name;
    string OwnerName;
    int SubcribersCount;
    list<string> PublishedVideos; // Make a list of string (or any list of data type), ex: {"name1", "name2", "etc"}

    public:
    YoutubeChannels(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubcribersCount = 0;
    }

    void getinfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Name: " << OwnerName << endl;
        cout << "SubcribersCount: " << SubcribersCount << endl;
        for (string video : PublishedVideos)
        {
            cout << video << endl;
        }
    }
    void publishedVideos(string title)
    {
        PublishedVideos.push_back(title);
    }
    void subcribersCount()
    {
        SubcribersCount++;
    }
    void unsubcriberCount()
    {
        if (SubcribersCount > 0 )
        {
            SubcribersCount--;
        }
    }
};

int main()
{
    /*YoutubeChannels myChannels("IreneAdler", "Nghia");
    myChannels.PublishedVideos.push_back("LoL");
    myChannels.PublishedVideos.push_back("Overwatch");
    myChannels.PublishedVideos.push_back("CSGO");*/

    /*YoutubeChannels myChannels;
    Name = "IreneAdler";
    OwnerName = "Nghia";
    SubcribersCount = 39;
    PublishedVideos = {"LoL", "Overwatch", "CS:GO"};*/
    /*cout << "Name: " << Name << endl;
    cout << "Name: " << OwnerName << endl;
    cout << "Playlist: ";
    for (string Playlist : PublishedVideos) // Syntax to display an object list
    {
        cout << Playlist << '\t';
    }*/
    YoutubeChannels myChannels("IreneAdler", "Nghia");
    myChannels.publishedVideos("Overwatch");
    myChannels.publishedVideos("CSGO");
    myChannels.subcribersCount();
    myChannels.getinfo();
    //system("pause > 0");
}