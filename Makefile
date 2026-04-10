yuki:
	gcc yuki.c -o yuki

install: yuki
	sudo mv yuki /usr/local/bin/
