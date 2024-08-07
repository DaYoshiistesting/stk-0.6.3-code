//  $Id: highscores.hpp 921 2007-02-28 05:43:34Z hiker $
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2006 Joerg Henrichs
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_HIGHSCORE_MANAGER_H
#define HEADER_HIGHSCORE_MANAGER_H

#include <string>
#include <vector>
#include <map>

#include "highscores.hpp"
#include "lisp/lisp.hpp"

const unsigned int CURRENT_HSCORE_FILE_VERSION = 1;

/**
  * This class reads and writes the 'highscores.data' file, and also takes
  * care of dealing with new records. One 'HighscoreEntry' object is created
  * for each highscore entry.
  */
class HighscoreManager
{
public:
private:
    typedef std::vector<HighscoreEntry*> type_all_scores;
    type_all_scores m_allScores;
    
    std::string m_filename;
    bool        m_can_write;

    void Load();
    void SetFilename();

public:
    HighscoreManager();
    ~HighscoreManager();
    void Save();
    HighscoreEntry *getHighscoreEntry(const HighscoreEntry::HighscoreType highscore_type,
                                      int num_karts, const RaceManager::Difficulty difficulty, 
                                      const std::string trackName, const int number_of_laps);
};   // HighscoreManager

extern HighscoreManager* highscore_manager;
#endif
