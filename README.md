
# yuki

A minimal pacman wrapper for Tokyo OS, named after my cat.

```
sudo yuki install <package>
sudo yuki remove <package>
     yuki search <package>
sudo yuki update
```

## build & install

```sh
gcc yuki.c -o yuki
sudo mv yuki /usr/local/bin/
```

## commands

| yuki          | pacman          |
|---------------|-----------------|
| install `<pkg>` | pacman -S       |
| remove `<pkg>`  | pacman -Rns     |
| search `<pkg>`  | pacman -Ss      |
| update        | pacman -Syu     |

## about

Yuki (雪) means *snow* in Japanese. He's the older of two cats, calm and dignified — a fitting name for a package manager that does its job quietly and gets out of the way.

Built as a learning project in C, part of the Tokyo OS ecosystem.

---

*Tokyo Linux — built from scratch, named with intention.*
