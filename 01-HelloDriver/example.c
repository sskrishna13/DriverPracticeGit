#include <linux/init.h>
#include <linux/module.h>

static int example_init(void)
{
	printk("<1>EXAMPLE : init\n");
	return 0;
}

static void example_exit(void)
{
	printk("<1>EXAMPLE : exit\n");
}


module_init(example_init);
module_exit(example_exit);

MODULE_AUTHOR("Krishna");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A simple hellow world kernel module");
