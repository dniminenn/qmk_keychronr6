# Keychron's Launcher lighting stack: configurable lock indicators, per-key RGB.
KEYCHRON_RGB_ENABLE = yes

include keyboards/keychron/common/keychron_common.mk

SRC += keyboards/keychron/common/matrix.c

KC_R6_SRC := $(filter-out %/state_notify.c,$(SRC))
SRC = $(KC_R6_SRC)
