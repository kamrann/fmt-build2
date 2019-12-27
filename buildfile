./: {*/ -build/ -upstream/} manifest doc{README.md} $doc_dir/doc{**}

# Don't install tests.
#
tests/: install = false
