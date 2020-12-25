#!/bin/bash

set -eu

SCRIPT_DIR=$(cd $(dirname $0); pwd)
QMK_FIRMWARE_PATH=$1

ls $1

rm -i $1/keyboards/claw44/rev1/rules.mk
ln ${SCRIPT_DIR}/keyboards/claw44/rev1/rules.mk $1/keyboards/claw44/rev1/
rm -i $1/keyboards/claw44/rev1/config.h
ln ${SCRIPT_DIR}/keyboards/claw44/rev1/config.h $1/keyboards/claw44/rev1/
if [ -e $1/keyboards/claw44/keymaps/kefi ]; then
  rm -ir $1/keyboards/claw44/keymaps/kefi
fi
mkdir $1/keyboards/claw44/keymaps/kefi
ln ${SCRIPT_DIR}/keyboards/claw44/keymaps/kefi/* $1/keyboards/claw44/keymaps/kefi/
rm -i $1/keyboards/ergodash/rules.mk
ln ${SCRIPT_DIR}/keyboards/ergodash/rules.mk $1/keyboards/ergodash/
if [ -e $1/keyboards/ergodash/rev1/keymaps/kefi ]; then
  rm -ir $1/keyboards/ergodash/rev1/keymaps/kefi
fi
mkdir $1/keyboards/ergodash/rev1/keymaps/kefi
ln ${SCRIPT_DIR}/keyboards/ergodash/rev1/keymaps/kefi/* $1/keyboards/ergodash/rev1/keymaps/kefi/
