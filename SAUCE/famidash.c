#include "include.h"

void main(){
    ppu_off();
    pal_bg(paletteDefault);
    load_ground(0);
    ppu_on_all();
    famistudio_music_play(song_stereo_madness_foreverbound);
    set_scroll_y(0xef);

    init_rld();
    load_next_column(0, 0);
    while (1){
        ppu_wait_nmi();
    }
}
























































































void load_ground(unsigned char id){
    vram_adr(NAMETABLE_C);
    vram_unrle(ground[id]);
}