# VimMouse

Simulate a physical mouse in linux with Vim key binding style.

Features:
- Move the mouse with different speeds using arrow keys or Vim key binding.
- Support mouse keys with press and hold and release.
- Execute shell commands


Did you forget to bring your mouse? Can't use mouse inside a car? Selecting text is hard while moving? Your device don't have touchpad or  trackpoint? Can't use mouse key because your keyboard dont have numpad? Np! Use vimmouse!

If you are already familior with Vim key binding style, you will be at home. If not vimmouse help you to return to home :)


## Installation on Ubuntu with released version.

- Download latest release from https://github.com/anopensourcecoder/vimmouse/releases  
- Copy vimmouse file into ~/bin folder ( or /usr/local/bin folder )
- make sure it is executable. 
- Run it from terminal or by a hotkey.

Here is a example:
```
sudo mkdir -p /usr/local/bin
sudo cp -f vimmouse /usr/local/bin
chmod 755 /usr/local/bin/vimmouse
```

## Installation on Ubuntu from source.
```
sudo apt-get install libx11-dev libxtst-dev
cd /tmp
git clone https://github.com/anopensourcecoder/vimmouse
cd vimmouse
make
sudo make install
```
Above put vimmouse at /usr/local/bin/vimmouse

## Configuration

Edit config.h and reinstall. The configuration file should be self explaining.

## Usage

You can start vimmouse from terminal by running mosuevim &

Or you can run it by your own hotkey using xbindkeys


Once vimmouse is run, then keybaord act like a physical mouse:

- Press h  key to move the pointer to left ( Or press left arrow key ).
- Press l  key to move the pointer to right  ( Or press right arrow key ).
- Press k  key to move the pointer to up  ( Or press up arrow key ).
- Press j  key to move the pointer to down  ( Or press down arrow key ).
- Press z key speed down the pointer movment ( Or Press Shift key or Ctrl key ).
- Press x key speed up the pointer movment ( or use Win key or Alt key ).

To simulate mouse key:

- Press a key to simulate pressing the left mouse key 
- Hold a key to simulate holding down the left mouse key. While holding down the a keys you can move the mouse pointer. This can be usefull to select a text from terminal output or any other program.
- Release a key to simulate releasing the left mouse key.
- Use s key to simulate the middle mouse key ( Press and hold and release are supported).
- Use d to simulate the right mouse key ( Press and hold and release are supported).

To simulate mouse scroll wheel: 
- Press q to scroll up
- Press q to scroll down

To quit mouse vim
- Press Escape or e key to quit the vimmouse.
- Pressing space key simulate left mouse key and quite the program.

Have fun.

### credit
Orginal program is called xmouseless. It is created by jbensmann. All credit goes to him for his awsome work. I only modify it to work with Vim key binding style base on my need.  

