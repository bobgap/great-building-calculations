//
//  gb_data.hpp
//  Greatbuilding_cpp
//
//  Created by Robert Borcherding on 2/14/19.
//  Copyright © 2019 Robert Borcherding. All rights reserved.
//

#ifndef gb_data_hpp
#define gb_data_hpp


struct gb_data_needed {int level, reward[5], medals[5], blueprints[5], fps_to_level, bonus;};

enum great_buildings {
    obs=0, oracle=1, temple=2, babel=3, zeus=4,
    colosseum=5, lighthouse=6, coa=7, hagia=8, st_marks=9,
    notre_dame=10, basils=11, cdm=12, deal=13, frauenkirche=14,
    capitol=15, albert_hall=16, chateau=17, alcatraz=18, needle=19,
    atomium=20, cape=21, habitat=22, inno_tower=23, lotus=24,
    voyager=25, dynamic_tower=26, rfp=27, arc=28, gaea=29,
    orangery=30, seed_vault=31, atlantis=32, kraken=33, blue_galaxy=34,
    terracotta=35, himeji=36};

struct gb_record {int fps_to_level; int first_reward;};

#define FUTURE_QTY 183
#define PROGRESSIVE_QTY 169
#define BRONZE_QTY 156
#define ARCTIC_FUTURE_QTY 137
#define LMA_QTY 138
#define PME_QTY 136
#define CE_QTY 121
#define VIRTUAL_FUTURE_QTY 114
#define OCEANIC_QTY 113
#define IRON_AGE_QTY 105
#define INDY_QTY 103
#define TOMORROW_QTY 102
#define MODERN_QTY 101
#define COLONIAL_QTY 101
#define HMA_QTY 108
#define NOAGE_QTY 108
#define ORACLE_QTY 108
#define EMA_QTY

#endif /* gb_data_hpp */
