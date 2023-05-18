#pragma once

#include "mission.hpp"

using namespace std;

class DistanceMission : public Mission
{
private:
    int target_distance;
    int total_distance = 0;

    void set_target_distance(int target_distance_);
    int calculate_total_distance(vector<Travel> & travels);

public:
    DistanceMission(int target_distance_, int start_timestamp_, int end_timestamp_, int reward, int mission_id_);

    bool is_mission_complete(Travel travel) override ;
    Mission * copy_mission() override;
};


