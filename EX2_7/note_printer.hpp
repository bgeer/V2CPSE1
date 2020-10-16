#ifndef NOTE_PRINTER_HPP
#define NOTE_PRINTER_HPP

#include "note_player.hpp"
#include <iostream>
#include <fstream>
using namespace std;

class note_printer: public note_player {
    public:
        void generateFile(){
            ofstream noteFile;
            noteFile.open ("song.hpp");
            noteFile << "#ifndef SONG_HPP\n#define SONG_HPP\n\n#include \"melody.hpp\"\n\nclass song : public melody {\npublic:\n\tvoid play( note_player & p ){\n";
            noteFile.close();
        }
        void play(const note & n) override {
            std::fstream noteFile;
            noteFile.open ("song.hpp", std::fstream::app);
            noteFile <<"      p.play( note{ "<<n.frequency <<",  "<<n.duration<<" } );\n";
            noteFile.close();
        };
        void finishFile(){
            std::fstream noteFile;
            noteFile.open("song.hpp", std::fstream::app);
            noteFile <<"   }\n};\n\n#endif";
            noteFile.close();
        }
    
};

#endif //NOTE_PRINTER_HPP