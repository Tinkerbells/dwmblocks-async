#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "sb-torrent", 1, 9)  \
    X("", "sb-music", 0, 12)   \
    X("", "sb-weather", 3600, 7) \
    X("", "sb-bitcoin", 3600, 10) \
    X("", "sb-dollar-exchange", 3600, 11) \
    X("", "sb-memory", 30, 3)     \
    X("", "sb-volume", 0, 5)     \
    X("", "sb-keyboard-layout", 0, 4)  \
    X("", "sb-time", 1, 2)  \
    X("", "sb-battery", 5, 1) \

#endif  // CONFIG_H
