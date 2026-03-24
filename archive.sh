#!/bin/bash

SRC="storage/matchStatistic"
DEST="storage/archive"

mkdir -p $DEST

timestamp=$(date +"%Y%m%d_%H%M")

zip -r "$DEST/MATCH_archive_$timestamp.zip" $SRC/*.txt 2>/dev/null

rm -f $SRC/*.txt
