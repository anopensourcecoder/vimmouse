
/* the rate at which the mouse moves in Hz */
static const unsigned int move_rate = 60;

/* the speed with no modifier (pixels per second) */
static const unsigned int default_speed = 200;

static SpeedBindings speed_bindings[] = {
    /* key             speed */ 
    { XK_Shift_L ,     1000 },
    { XK_Control_L,    1000 },    
    { XK_x,            1000 },
    { XK_z,            50   },
    { XK_Super_L,      50   },
    { XK_Alt_L,        50   },
};

/* you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key          x      y */
    { XK_h,        -1,     0 },
    { XK_l,         1,     0 },
    { XK_k,         0,    -1 },
    { XK_j,         0,     1 },
    { XK_Left,     -1,     0 },
    { XK_Right,     1,     0 },
    { XK_Up,        0,    -1 },
    { XK_Down,      0,     1 },

};

/* 1: left
 * 2: middle
 * 3: right
 * 4: scroll up
 * 5: scroll down */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_space,    1 },
    { XK_a,        1 },
    { XK_s,        2 },
    { XK_d,        3 },
    { XK_q,        4 },
    { XK_w,        5 },
    { XK_plus,     4 },
    { XK_minus,    5 },
};

static ShellBinding shell_bindings[] = {
    /* key         command */  
    { XK_1,        "wmctrl -a firefox" },
    { XK_0,        "xdotool mousemove 0 0" },
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape, XK_e, XK_space
};