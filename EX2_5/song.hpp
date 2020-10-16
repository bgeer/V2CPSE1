#ifndef SONG_HPP
#define SONG_HPP

#include "melody.hpp"

class song : public melody {
public:
	void play( note_player & p ){
      p.play( note{ note::880,  note::1000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::1000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::1000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::2000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::2000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::2000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::1000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::1000000 } );
      p.play( note{ note::0,  note::1000000 } );
      p.play( note{ note::880,  note::1000000 } );
   }
};

#endif