To run the `LD_PRELOAD` program (constructor-hook and consturctor-hook-client) :
- Build the hook first: `gcc -shared -fPIC -ldl constructor-hook.c -o constructor-hook.so`.
- Build the client program: `gcc constructor-hook-client.c -o client`
- Run the program using: `LD_PRELOAD=$PWD/constructor-hook.so ./client`
