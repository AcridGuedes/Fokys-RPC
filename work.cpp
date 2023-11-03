#include <fstream>
#include <iostream>
#include "include/discord_rpc.h"
#include "include/json.hpp"

using namespace std;
using json = nlohmann::json;

struct Button{
    string isButton;
    string text;
    string url;
};

int main(){
    Button one,two;
    ifstream f("settings.json");
    json data = json::parse(f);
    string ClientID = data.value("rpc", "0");
    if(ClientID == "0"){
        cout<<"Application Id is invalid!";
        return -1;
    }
    string state = data.value("state", "invalid");
    if(state == "invalid"){
        cout<<"State is invalid!";
        return -1;
    }
    string details = data.value("description", "invalid");
    if(details == "invalid"){
        cout<<"Description is invalid!";
        return -1;
    }
    string activityType = data.value("activityType", "invalid");
    if(activityType == "invalid"){
        cout<<"Activity Type is invalid";
        return -1;
    }
    one.isButton = data.value("firstButton", "invalid");
    if(one.isButton == "invalid"){
        cout<<"Activate Button is invalid";
        return -1;
    }
    one.text = data.value("firstLabel", "invalid");
    if(one.text == "invalid"){
        cout<<"Text is invalid";
        return -1;
    }
    one.url = data.value("firstUrl", "invalid");
    if(one.url == "invalid"){
        cout<<"Url is invalid";
        return -1;
    }
    two.isButton = data.value("secondButton", "invalid");
    if(two.isButton == "invalid"){
        cout<<"Activate Button is invalid";
        return -1;
    }
    two.text = data.value("secondLabel", "invalid");
    if(two.text == "invalid"){
        cout<<"Text is invalid";
        return -1;
    }
    two.url = data.value("secondUrl", "invalid");
    if(two.url == "invalid"){
        cout<<"Url is invalid";
        return -1;
    }
    string largeImage = data.value("largeImage", "invalid");
    if(largeImage == "invalid"){
        cout<<"largeImage is invalid";
        return -1;
    }
    string smallImage = data.value("smallImage", "invalid");
    if(smallImage == "invalid"){
        cout<<"SmallImage is invalid";
        return -1;
    }
    string largeText = data.value("largeText", "invalid");
    if(largeText == "invalid"){
        cout<<"LargeText is invalid";
        return -1;
    }
    string smallText = data.value("smallText", "invalid");
    if(smallText == "invalid"){
        cout<<"smallText is invalid";
        return -1;
    }
    cout<<ClientID;
}