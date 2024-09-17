#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

// Hàm init_module được gọi khi module được tải vào kernel
static int __init hello_init(void) {
    printk(KERN_INFO "Hello, World from kernel!\n");
    return 0; // Trả về 0 nếu thành công
}

// Hàm cleanup_module được gọi khi module bị gỡ bỏ
static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye, World from kernel!\n");
}

module_init(hello_init); // Chỉ định hàm init
module_exit(hello_exit); // Chỉ định hàm exit

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Manh Pham");
MODULE_DESCRIPTION("A simple Hello World Kernel Module");

