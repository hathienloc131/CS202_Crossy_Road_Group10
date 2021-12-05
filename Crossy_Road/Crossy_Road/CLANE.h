#ifndef CLANE_

#define CLANE_

#include "CROAD.h"
#include "CASSET.h"
#include "Constants.h"

class CLANE :
    public CROAD
{
private:
    const string asset_name_road_twoway = "LANE_N";
    const string asset_name_road_oneway = "LANE2_N";
    const float scale = 1;
    const float half_scale = 0.5;
    bool is_oneway;
    CRCARFACTORY carFac;
    CRCARFACTORY carFac1;

public:
    //constructor | destructor
    CLANE(sf::Vector2f pos, bool one_way = false);
    CLANE(float index = 1, bool one_way = false);
    ~CLANE();

    //other function
    bool is_road();
    void drawSubObj(sf::RenderWindow& window);
    void shiftSubObj(char UorD);
    void update(sf::RenderWindow& window);


};


#endif // !CLANE_
