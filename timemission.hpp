#pragma once

#include "mission.hpp"

using namespace std;

class TimeMission : public Mission
{
private:
    int target_time;
    int total_time = 0;
    void set_target_time(int target_time_);
    int calculate_total_min(vector<Travel> & travels);

public:
    TimeMission(int target_time_, int start_timestamp_, int end_timestamp_, int reward, int mission_id_);
    bool is_mission_complete(Travel travel) override;
    Mission * copy_mission() override;
};
