#ifndef SONG_HPP
#define SONG_HPP

#include "melody.hpp"

class song : public melody {
public:
	void play( note_player & p ){
      p.play( note{ 1046,  240000 } );
      p.play( note{ 1046,  240000 } );
      p.play( note{ 880,  240000 } );
      p.play( note{ 987,  240000 } );
      p.play( note{ 880,  120000 } );
      p.play( note{ 987,  240000 } );
      p.play( note{ 784,  240000 } );
      p.play( note{ 0,  240000 } );
      p.play( note{ 1046,  240000 } );
      p.play( note{ 1046,  240000 } );
      p.play( note{ 880,  240000 } );
      p.play( note{ 987,  120000 } );
      p.play( note{ 880,  120000 } );
      p.play( note{ 0,  120000 } );
      p.play( note{ 784,  240000 } );
      p.play( note{ 0,  240000 } );
      p.play( note{ 659,  240000 } );
      p.play( note{ 659,  240000 } );
      p.play( note{ 784,  240000 } );
      p.play( note{ 698,  240000 } );
      p.play( note{ 659,  120000 } );
      p.play( note{ 698,  240000 } );
      p.play( note{ 1046,  120000 } );
      p.play( note{ 523,  120000 } );
      p.play( note{ 587,  120000 } );
      p.play( note{ 659,  240000 } );
      p.play( note{ 659,  120000 } );
      p.play( note{ 659,  120000 } );
      p.play( note{ 0,  120000 } );
      p.play( note{ 659,  120000 } );
      p.play( note{ 784,  240000 } );
      p.play( note{ 0,  480000 } );
      p.play( note{ 1046,  240000 } );
      p.play( note{ 1046,  240000 } );
      p.play( note{ 880,  240000 } );
      p.play( note{ 987,  240000 } );
      p.play( note{ 880,  120000 } );
      p.play( note{ 987,  240000 } );
      p.play( note{ 784,  240000 } );
      p.play( note{ 0,  240000 } );
      p.play( note{ 1046,  240000 } );
      p.play( note{ 1046,  240000 } );
      p.play( note{ 880,  240000 } );
      p.play( note{ 987,  120000 } );
      p.play( note{ 880,  240000 } );
      p.play( note{ 784,  240000 } );
      p.play( note{ 0,  240000 } );
      p.play( note{ 659,  240000 } );
      p.play( note{ 659,  240000 } );
      p.play( note{ 784,  240000 } );
      p.play( note{ 698,  240000 } );
      p.play( note{ 659,  120000 } );
      p.play( note{ 698,  240000 } );
      p.play( note{ 1046,  120000 } );
      p.play( note{ 523,  120000 } );
      p.play( note{ 587,  120000 } );
      p.play( note{ 659,  240000 } );
      p.play( note{ 659,  120000 } );
      p.play( note{ 587,  240000 } );
      p.play( note{ 587,  120000 } );
      p.play( note{ 523,  240000 } );
   }
};

#endif