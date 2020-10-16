#include "hwlib.hpp"
#include "note_player_gpio.hpp"
#include "song.hpp"
 
 
 int main(){
    namespace target = hwlib::target;   
    auto lsp = target::pin_out( target::pins::d7 );
    auto p = note_player_gpio( lsp );


    if( 1 ){
        auto fe = song();
        fe.play( p );
    }
    return 0; 
 }