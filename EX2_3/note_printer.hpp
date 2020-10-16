#ifndef NOTE_PRINTER_HPP
#define NOTE_PRINTER_HPP

#include "note_player.hpp"

class note_printer: public note_player {
    public:
        void play(const note & n) override {
            hwlib::cout<<"Freq: " << n.frequency << "       Dur: " <<n.duration << hwlib::endl;
        };
    
};

#endif //NOTE_PRINTER_HPP