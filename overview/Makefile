LATEXFLAGS+=	-shell-escape

.PHONY: all
all: overview-slides.pdf overview-notes.pdf

SRC=		overview-content.tex abstract.tex overview.bib
SRC+=		jail.py
SRC+=		combine.c
SRC+=		echo.sh echofix.sh
SRC+=		BobbyTables.png
SRC+=		procmem.jpg
SRC+=		login.c

DEPENDS+=	latexmkrc

overview-slides.pdf overview-notes.pdf: ${SRC} ${DEPENDS}

overview-slides.pdf: overview-slides.tex
overview-notes.pdf: overview-notes.tex llncs

procmem.jpg:
	wget -O $@ https://www.linuxjournal.com/files/linuxjournal.com/linuxjournal/articles/067/6701/6701f1.jpg

BobbyTables.png:
	wget -O $@ http://imgs.xkcd.com/comics/exploits_of_a_mom.png

INCLUDE_MAKEFILES=../makefiles
include ${INCLUDE_MAKEFILES}/tex.mk
