// Put the bar at the bottom of the screen
static bool topbar = true;

// Force docking (use this if your WM isn't EWMH compliant)
static bool dock = false;

// Don't close after the data ends
static bool permanent = false;

// Geometry string in the format "widthxheight+xoffset+yoffset"
static const char *bar_geometry = "1920x20+0+0";

// Output names, comma-separated string. Empty string for all outputs.
static const char *outputs = "";

// Font names, comma-separated string.
static const char *font_names = "-misc-monospace";

// WM_NAME atom value
static const char *wm_name = "bar";

// Underline/overline height in pixels
static int underline_height = 1;

// Background color in #RRGGBB or #AARRGGBB format
static const char *background_color = "#f5f5f5";

// Foreground color in #RRGGBB or #AARRGGBB format
static const char *foreground_color = "#444444";

// Underline color in #RRGGBB or #AARRGGBB format
static const char *underline_color = "#444444";
