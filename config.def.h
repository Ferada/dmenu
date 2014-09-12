/* See LICENSE file for copyright and license details. */
/* vim: expandtab
 */
/* Default settings; can be overrided by command line. */

static Bool topbar = True;                  /* -b  option; if False, dmenu appears at bottom */
static const char *font = "unifont-12";             /* -fn option; default X11 font or font set      */
static const char *prompt = NULL;           /* -p  option; prompt to the elft of input field */
static const char *normbgcolor = "#111111"; /* -nb option; normal background                 */
static const char *normfgcolor = "#bbbbbb"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#222222"; /* -sb option; selected background               */
static const char *selfgcolor  = "#eeeeee"; /* -sf option; selected foreground               */
static const char *outbgcolor  = "#222222";
static const char *outfgcolor  = "#eeeeee";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

