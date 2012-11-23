all:
	@echo "Kompilowanie programów..."
	cd cw06; make
	cd cw07; make
	cd cw08; make
	cd cw09; make
	cd cw10; make

clean:
	@echo "Usuwanie wygenerowanych plików..."
	cd cw06; make clean
	cd cw07; make clean
	cd cw08; make clean
	cd cw09; make clean
	cd cw10; make clean
