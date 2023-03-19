# Snake3D

## Summary

Tools
- [language](#language)
- [SFML](#sfml)

Overview of the gameplay
- [graphic design](#graphic-design)
- [gameplay](#gameplay)

Code structure 
- [files](#files)
- [classes](#classes)
- [constants](#constants)

## Tools

### Language

### SFML

## Overview of the gameplay

### Graphic design

Contrary to what one might think, _Snake3D_ is a 2D game. It is develop in _C++_ using the _SFML_ library to handle all the graphics purposes.

The game is design as a 3D snake. The snake can move in a _\_SIZE_GRID\__ $\times$ _\_SIZE_GRID\__ $\times$ _\_SIZE_GRID\__ grid.

### Gameplay

## Code structure 

### Files

#### Headers

- **Snake.hpp** : File that contain all the game feature (not the display part).
- **Constant.hpp** : File that contain all the definition of the constants of the game.
- **Display.hpp** : 

#### Sources

- **MainSnake.cpp** : Main file that contain the main function. There is a method called LaunchGame that allocate the memory for the Snake class and pass this pointer to the Display class. It also generate two independant threads and the mutex. One thread corespond to the Display part and the other thread correspond to the Snake part.
- **Snake.cpp** : File that contain all the game feature (not the display part).
- **Display.cpp** : 

### Classes


### Constants

- ***\_SIZE_GRID\_*** : Size of the grid (number of tiles in a raw).
value = _10_
- ***\_NBR_APPLE_\_*** : Number of apple that will be appear until the end of the game.
value = _30_ 
- ***\_FREQ_MIN\_*** : Minimal frequence (speed - tiles per second) of the snake
- ***\_FREQ_MAX\_*** : Maximal frequence (speed - tiles per second) of the snake
- ***\_FREQ_INI\_*** : Initial frequence (speed - tiles per second) of the snake
- ***\_SIZE_SPRITE\_*** : Size of a snake sprite in the grid in pixel.
value = _30_
- ***\_SIZE_PADDING\_*** : Size of a padding border around the square in pixel.
value = _1_
- ***\_SIZE_SQUARE\_*** : Size of a square in the grid in pixel.
value = _32_ = \_SIZE_SPRITE\_ + 2 * \_SIZE_SQUARE\_
- ***\_SIZE_SPACE\_*** : Size of the spaces between the screen in pixel.
value = _32_

