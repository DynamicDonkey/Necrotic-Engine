# Necrotic Engine

![Build Status](https://travis-ci.org/DynamicDonkey/Necrotic-Engine.svg?branch=master)

Necrotic Engine is a 2D C++/SDL game engine that really shouldn't be alive.

  - Particle Effects (Not yet implemented)
  - GPU acceleration
  - More to come

# New Features!

  - All of them so far :)


### Tech

Necrotic Engine uses a number of open source projects to work properly:

* [SDL2](https://www.libsdl.org/) - cross-platform library designed to provide low level access to audio, input devices, and graphics hardware.
* [Code::Blocks](http://www.codeblocks.org/) - Lightweight FOSS C/C++ IDE

### Installation

Necrotic Engine requires [SDL2](https://www.libsdl.org/download-2.0.php) v2.0.*+ to run.

Install the dependencies and devDependencies and start the engine.

```sh
$ cd SoftEngine
$ make debug
$ chmod +x bin/Debug/SoftEngine
$ bin/Debug/SoftEngine
```

For production environments...

```sh
$ cd SoftEngine
$ make release
$ chmod +x bin/Release/SoftEngine
$ bin/Release/SoftEngine
```

## Contributing

1. Fork it (<https://github.com/DynamicDonkey/Necrotic-Engine/fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request

### Todos

 - Write MORE Tests
 - Add Night Mode

License
----

MIT

