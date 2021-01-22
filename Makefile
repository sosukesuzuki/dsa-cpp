format:
	clang-format -i ./**/*.{cpp,h}

clean:
	rm -f ./**/main
	rm -f ./**/*.o

test:
	sh ./scripts/run-test.sh

.PHONY: clean format
