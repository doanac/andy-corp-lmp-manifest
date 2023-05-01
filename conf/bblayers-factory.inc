# This is a FoundriesFactory bblayers include file

# Meta-subscriber-overrides is the main FoundriesFactory layer
# Do not remove unless you really know what you are doing.
BASELAYERS += "${OEROOT}/layers/meta-subscriber-overrides"

# Extend the list of default BSP layers included by LMP by uncommenting
# and modifying the following lines (default list available in the
# bblayers-bsp.inc file).
#
#BSPLAYERS += " \
#  ${OEROOT}/layers/meta-your-own-layer \
#"

# To completely replace the default list of BSP layers used by LMP,
# uncomment the following lines and extend with your own layer list.
# You can find the standard BSP list at the bblayers-bsp.inc file, which
# gets parsed before this file (meta-lmp-bsp is required for the
# base BSP support).
#
#BSPLAYERS = " \
#  ${OEROOT}/layers/meta-lmp/meta-lmp-bsp \
#"
