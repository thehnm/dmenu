/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 300;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:style=bold:size=11"
};
static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static char col_fg[] = "#ECEFF4";
static char col_bg[] = "#2E3440";
static char col_sel[] = "#81A1C1";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "col_fg",		STRING, &col_fg },
	{ "col_bg",		STRING, &col_bg },
	{ "col_sel",	STRING, &col_sel },
	{ "prompt",		STRING, &prompt },
};

static char *colors[SchemeLast][2] = {
	            /*     fg         bg       */
	[SchemeNorm] = { col_fg, col_bg },
	[SchemeSel] =  { col_bg, col_sel },
	[SchemeOut] =  { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
