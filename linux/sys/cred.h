# if !defined(SYS_CRED_H)
# define SYS_CRED_H

typedef struct cred {
	int	cr_uid;
	int	cr_ruid;
	int	cr_suid;
	int	cr_gid;
	int	cr_rgid;
	int	cr_sgid;
	} cred_t;

cred_t *CRED();

# define	curthread current_thread_info()->task

# endif