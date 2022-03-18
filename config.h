// should we be on the top[1] or the bottom[0]
static int topbar = 1;

// 0 = horizontal, 1 = vertical
static unsigned int lines = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 25;
static unsigned int min_lineheight = 25;

// delimiter
static const char worddelimiters[] = " ";

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FiraCode-Regular:size=10"
};

static const char *FIRST_COLOR = "";

/* -p  option; prompt to the left of input field */
static const char *prompt = 0;

static const char *colors[SchemeLast][2] = {
	/* key: { fg, bg }       */
	[SchemeNorm] = { "#bbbbbb", "#282a36" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
