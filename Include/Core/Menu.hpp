#pragma once

class Menu {
public:
    void drawMenu();

private:
    void sendLoadLevelMessage();

private:
    char m_levelInputText[256] = "_pvz/Levels/Mainstreet/Level_COOP_Mainstreet/Level_COOP_Mainstreet";
    char m_inclusionOptionsInputText[256] = "GameMode=TeamDeathMatch0;TOD=Day;ZDebugMode=AllLevelLoaded";

};
