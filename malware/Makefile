LATEXFLAGS+=	-shell-escape

.PHONY: all
all: slides.pdf notes.pdf

SRC=		contents.tex abstract.tex bibliography.bib
SRC+=		jail.py
SRC+=		combine.c
SRC+=		echo.sh echofix.sh
SRC+=		BobbyTables.png
SRC+=		procmem.jpg
SRC+=		login.c

DEPENDS+=	latexmkrc

slides.pdf notes.pdf: ${SRC} ${DEPENDS}

slides.pdf: slides.tex
notes.pdf: notes.tex

procmem.jpg:
	wget -O $@ https://www.linuxjournal.com/files/linuxjournal.com/linuxjournal/articles/067/6701/6701f1.jpg

BobbyTables.png:
	wget -O $@ http://imgs.xkcd.com/comics/exploits_of_a_mom.png

.PHONY: clean-depends distclean
clean-depends distclean:
	${RM} procmem.jpg BobbyTables.png

.PHONY: clean
clean:
	${RM} notes.pdf slides.pdf
	${RM} -R __pycache__ _minted-*

INCLUDE_MAKEFILES=../makefiles
include ${INCLUDE_MAKEFILES}/tex.mk
