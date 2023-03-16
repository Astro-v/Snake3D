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

#### Sources

- **MainSnake.cpp** : main file that contain the main function.

### Classes


### Constants

- ***\_SIZE_GRID\_*** : Size of the grid (number of tiles in a raw).
value = _10_
- ***\_NBR_APPLE_\_*** : Number of apple that will be appear until the end of the game.
value = _30_ 
- ***\_FREQ_MIN\_*** : Minimal frequence (speed - tiles per second) of the snake
- ***\_FREQ_MAX\_*** : Maximal frequence (speed - tiles per second) of the snake
- ***\_FREQ_INI\_*** : Initial frequence (speed - tiles per second) of the snake
