
/*  main.cpp
  Greatbuilding_cpp

  Created by Robert Borcherding on 2/14/19.
  Copyright © 2019 Robert Borcherding. All rights reserved.
*/

#include <iostream>
#include "gb_data.hpp"
#include <cmath>
#include <string>

int  get_gb_data(great_buildings, int level, int* rewards);

std::string gb_name (int gb)
    {
        switch (gb)
        {
        case  0:
            return "Observatory";
            break;
        case 1:
            return "Oracle";
            break;
        case 2:
            return "Temple of Relics";
            break;
        case 3:
            return "Tower of Babel";
            break;
        case 4:
            return "Statue of Zeus";
            break;
        case 5:
            return "Colosseum";
            break;
        case 6:
            return "Lighthouse of Alexandria";
            break;
        case 7:
            return "Cathedral of Aachen";
            break;
        case 8:
            return "Hagia Sophia";
            break;
        case 9:
            return "St. Mark's Basilica";
            break;
        case 10:
            return "Notre Dame Cathedral";
            break;
        case 11:
            return "St. Basil's Cathedral";
            break;
        case 12:
            return "Castel del Monte";
            break;
        case 13:
            return "Deal Castle";
            break;
        case 14:
            return "Frauenkirche of Dresden";
            break;
        case 15:
            return "Capitol";
            break;
        case 16:
            return "Royal Albert Hall";
            break;
        case 17:
            return "Chateau de Frontenac";
            break;
        case 18:
            return "Alcatraz";
            break;
        case 19:
            return "Space Needle";
            break;
        case 20:
            return "Atomium";
            break;
        case 21:
            return "Cape Canaveral";
            break;
        case 22:
            return "Habitat";
            break;
        case 23:
            return "Innovation Tower";
            break;
        case 24:
            return "Lotus Temple";
            break;
        case 25:
            return "Voyager";
            break;
        case 26:
            return "Dynamic Tower";
            break;
        case 27:
            return "Rainforest Project";
            break;
        case 28:
            return "Arc";
            break;
        case 29:
            return "Statue of Gaea";
            break;
        case 30:
            return "Arctic Orangery";
            break;
        case 31:
            return "Seed Vault";
            break;
        case 32:
            return "Atlantis Museum";
            break;
        case 33:
            return "Kraken";
            break;
        case 34:
            return "Blue Galaxy";
            break;
        case 35:
            return "Terracotta Army";
            break;
        case 36:
            return "Himeji Castle";
            break;
        default:
            return "error";
                
        }
}

int main(int argc, const char * argv[]) //boost greatbuilding#
{
    // insert code here...
    int lvl,self_contribution, building, answer=0, rewards[5], fps_to_level,
        arc_contribution, self_total, spot,boost_int;
    float boost;
    //  boost = std::stof(argv[1]);
    //  building = std::stoi(argv[2]);
    for (building=0;building<37;building++)
    {
        for (lvl=1;lvl<=100;lvl++)
        {
 
           
                for (boost_int=180;boost_int<195;boost_int+=5)
                {
                    boost=float(boost_int)/100.0f;
                        fps_to_level=get_gb_data(great_buildings(building),lvl, rewards);  //also puts the five rewards into the array "rewards[]"
                        self_total=0;
                        arc_contribution=0;
                        self_contribution=0;
                    
                   
                       std::cout<<gb_name(building)<<"\t"<< lvl << "\t"<< fps_to_level <<"\t" << boost;
                    
                            //determine self contribution for each spot
                        for (spot=0;spot<5;spot++)
                        {
                            arc_contribution=boost*float(rewards[spot])+0.51f;
                            if (arc_contribution>fps_to_level)
                                arc_contribution=fps_to_level;
                            self_contribution=fps_to_level - 2 * arc_contribution;
                            if (self_contribution < 0 )
                                self_contribution=0;
                            self_total+=self_contribution;
                            std::cout << "\t"<<rewards[spot] << "\t"<<self_contribution<<"\t" << arc_contribution;
                            fps_to_level-=self_contribution+arc_contribution;
                        }
                    self_total+=fps_to_level;  //forge points left after 5th has placed theirs
                std::cout <<"\t"<<self_total<<"\n";
                }//for boost
    } //for lvl
        
    }  //for building
    return answer;
}
