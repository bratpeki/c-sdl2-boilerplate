# Boilerplate for a simple SDL2 application

## Architecture

### File tree

```
.
├── Makefile
├── README.md
└── src
    ├── event.c
    ├── include
    │   ├── event.h
    │   └── win.h
    ├── main.c
    └── win.c
```

### File description

| File       | Use                           |
| ---------- | ----------------------------- |
| `Makefile` | Premade `Makefile`            |
| `event.c`  | Event handler                 |
| `event.h`  | Function header for `event.c` |
| `main.c`   | Main execution file           |
| `win.c`    | Window related functionality  |
| `win.h`    | Function header from `win.c`  |

### Makefile presets

| Preset   | Meaning                                                    |
| -------- | ---------------------------------------------------------- |
| `build`  | Build the output binary `main.out`                         |
| `clean`  | Remove the output binary `main.out`                        |
| `dbuild` | Same as `build`, but with added flags for debugging (`-g`) |
| `exec`   | Execute the output binary `main.out`                       |

### int main()

This is how `main` is arranged:

```c
if ( winInit() ) return EXIT_FAILURE;
else {

	while (stateRunning) {

		winRender();
		eventHandle();

	}

	winQuit();

	return EXIT_SUCCESS;
}
```

Firstly, the program checks if it can initialize `SDL2`.
Initializing means creating a window (640x640) and a renderer.
Then, as long as the program is running, wait for an input and update the display once there is any.

So, the diagram of `main` would be similar to the following:

```
winInit --> was is successful? ---> EXIT_FAILURE;
                               no
            |
            | yes
            |
            v

            winRender <----
                           \
            |               |
            |               |
            |               |
            v               | no

            eventHandle --> event = exit ?

                            |
                            | yes
                            |
                            v

                            EXIT_SUCCESS;
```
