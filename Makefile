format:
	clang-format -i ./src/**/*.{cpp,h}

clean:
	rm -f ./**/main
	rm -f ./**/*.o

test:
	bash ./scripts/run-test.sh

.PHONY: clean format test
