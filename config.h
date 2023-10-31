/* config.h */

#ifndef _CONFIG_H_
#define _CONFIG_H_

/* Control keys. These should be something ncurses understands. */
#define CONTROL_LEFT	KEY_LEFT	/* Move left */
#define CONTROL_RIGHT	KEY_RIGHT	/* Move right */
#define CONTROL_ROT_CW	KEY_UP		/* Rotate clock-wise */
#define CONTROL_ROT_CCW	' '		/* Rotate counter-clock-wise */
#define CONTROL_DROP	KEY_DOWN	/* Drop */
#define CONTROL_REFRESH	'r'		/* Refresh screen */

/* Control keys. These should be something ncurses understands. */
#define ALT_CONTROL_LEFT	'a'	/* Move left */
#define ALT_CONTROL_RIGHT	'd'	/* Move right */
#define ALT_CONTROL_ROT_CW	'k'		/* Rotate clock-wise */
#define ALT_CONTROL_ROT_CCW	'j'		/* Rotate counter-clock-wise */
#define ALT_CONTROL_DROP	's'	/* Drop */

#define CONTROL_FULL_DROP 'h'

/* Highscore file. */
#define HIGHSCORE_FILE	"/var/local/petris/highscores"

/* Number of entries in highscore list. */
#define SIZE_HS_LIST	10

#endif /* _CONFIG_H_ */
