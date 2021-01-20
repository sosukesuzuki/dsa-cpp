format:
	clang-format -i ./**/*.{cpp,h}

clean:
	rm -f ./**/main
	rm -f ./**/*.o

.PHONY: clean format
