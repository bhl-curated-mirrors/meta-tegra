HOMEPAGE = "https://developer.nvidia.com/embedded"

COMPATIBLE_MACHINE = "(tegra)"

L4T_DEB_SOCNAME = "t234"
SRC_SOC_DEBS = "${@l4t_deb_pkgname(d, 'graphics-demos')};subdir=l4t-graphics-demos"
PV .= "${@l4t_bsp_debian_version_suffix(d, pkgname='nvidia-l4t-graphics-demos')}"

inherit l4t_deb_pkgfeed

SRC_URI[sha256sum] = "18c0ad68e23b4b7992dec37c39cad31adb482eff3c3aece192d5697bc8dc5e95"

S = "${WORKDIR}/l4t-graphics-demos/usr/src/nvidia/graphics_demos"
B = "${S}"

PACKAGE_ARCH = "${TEGRA_PKGARCH}"
