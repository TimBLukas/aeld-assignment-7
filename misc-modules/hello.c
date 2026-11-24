/*                                                     
 * $Id: hello.c,v 1.5 2004/10/26 03:32:21 corbet Exp $ 
 */                                                    
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
    char* github_username = "TimBLukas";
	printk(KERN_ALERT "Hello, world %s\n", github_username);
	return 0;
}

static void hello_exit(void)
{
	print
}

module_init(hello_init);
module_exit(hello_exit);
