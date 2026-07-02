# Maintainer: abrakadam <abrakadam@users.noreply.github.com>
pkgname=opsec
pkgver=1.0.0
pkgrel=1
pkgdesc="Operational Security — because you can't spell 'security' without 'opsec'"
arch=('x86_64')
url="https://www.youtube.com/watch?v=dQw4w9WgXcQ"
license=('WTFPL')
depends=('gcc-libs')
source=("https://github.com/StormDevzz/opsec/archive/v$pkgver.tar.gz")
md5sums=('77b1e20589333c0008bb11d46a89f009')

build() {
    cd "$srcdir/$pkgname-$pkgver"
    g++ -std=c++11 -O2 -o opsec opsec.cpp
}

package() {
    cd "$srcdir/$pkgname-$pkgver"
    install -Dm755 opsec "$pkgdir/usr/bin/opsec"
    install -Dm644 opsec.cpp "$pkgdir/usr/share/doc/opsec/source.cpp"
}
