/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e3440",     /* after initialization */
	[INPUT] =  "#5e81ac",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "speak friend and enter";

/* text color */
static const char * text_color = "#e5e9f0";

/* text size (must be a valid size) */
static const char * font_name = "12x24";
