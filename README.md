# Learn kernel

## Build

```shell
make
```

## Load module into kernel

```shell
sudo insmod hello.ko
```

## UnLoad module into kernel

```shell
sudo rmmod hello
```

### Check log

```shell
sudo dmesg | tail
```
