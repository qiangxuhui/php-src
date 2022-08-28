/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 470fcd62773b033ac200d7817b7917eee5bb812e */

#if defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_connect, 0, 0, LDAP\\Connection, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, uri, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 0, "389")
	ZEND_ARG_TYPE_INFO(0, wallet, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, auth_mode, IS_LONG, 0, "GSLC_SSL_NO_AUTH")
ZEND_END_ARG_INFO()
#endif

#if !(defined(HAVE_ORALDAP))
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_connect, 0, 0, LDAP\\Connection, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, uri, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 0, "389")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_unbind, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
ZEND_END_ARG_INFO()

#define arginfo_ldap_close arginfo_ldap_unbind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_bind, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dn, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_bind_ext, 0, 1, LDAP\\Result, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dn, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

#if defined(HAVE_LDAP_SASL)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_sasl_bind, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dn, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mech, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, realm, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, authc_id, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, authz_id, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, props, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_read, 0, 3, LDAP\\Result, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, ldap)
	ZEND_ARG_TYPE_MASK(0, base, MAY_BE_ARRAY|MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_MASK(0, filter, MAY_BE_ARRAY|MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, attributes, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, attributes_only, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sizelimit, IS_LONG, 0, "-1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timelimit, IS_LONG, 0, "-1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, deref, IS_LONG, 0, "LDAP_DEREF_NEVER")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_ldap_list arginfo_ldap_read

#define arginfo_ldap_search arginfo_ldap_read

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_free_result, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_count_entries, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_first_entry, 0, 2, LDAP\\ResultEntry, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_next_entry, 0, 2, LDAP\\ResultEntry, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, entry, LDAP\\ResultEntry, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_get_entries, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_first_attribute, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, entry, LDAP\\ResultEntry, 0)
ZEND_END_ARG_INFO()

#define arginfo_ldap_next_attribute arginfo_ldap_first_attribute

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_get_attributes, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, entry, LDAP\\ResultEntry, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_get_values_len, 0, 3, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, entry, LDAP\\ResultEntry, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_ldap_get_values arginfo_ldap_get_values_len

#define arginfo_ldap_get_dn arginfo_ldap_first_attribute

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_explode_dn, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, with_attrib, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_dn2ufn, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_add, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, entry, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_add_ext, 0, 3, LDAP\\Result, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, entry, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_delete, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_delete_ext, 0, 2, LDAP\\Result, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_modify_batch, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, modifications_info, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_ldap_mod_add arginfo_ldap_add

#define arginfo_ldap_mod_add_ext arginfo_ldap_add_ext

#define arginfo_ldap_mod_replace arginfo_ldap_add

#define arginfo_ldap_modify arginfo_ldap_add

#define arginfo_ldap_mod_replace_ext arginfo_ldap_add_ext

#define arginfo_ldap_mod_del arginfo_ldap_add

#define arginfo_ldap_mod_del_ext arginfo_ldap_add_ext

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_errno, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_error, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_err2str, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, errno, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_compare, 0, 4, MAY_BE_BOOL|MAY_BE_LONG)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_rename, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, new_rdn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, new_parent, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, delete_old_rdn, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_rename_ext, 0, 5, LDAP\\Result, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, new_rdn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, new_parent, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, delete_old_rdn, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_get_option, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, value, "null")
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_set_option, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 1)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_count_references, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_first_reference, 0, 2, LDAP\\ResultEntry, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_next_reference, 0, 2, LDAP\\ResultEntry, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, entry, LDAP\\ResultEntry, 0)
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP) && defined(HAVE_LDAP_PARSE_REFERENCE)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_parse_reference, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, entry, LDAP\\ResultEntry, 0)
	ZEND_ARG_INFO(1, referrals)
ZEND_END_ARG_INFO()
#endif

#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP) && defined(HAVE_LDAP_PARSE_RESULT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_parse_result, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
	ZEND_ARG_INFO(1, error_code)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, matched_dn, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, error_message, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, referrals, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, controls, "null")
ZEND_END_ARG_INFO()
#endif

#if defined(LDAP_API_FEATURE_X_OPENLDAP) && defined(HAVE_3ARG_SETREBINDPROC)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_set_rebind_proc, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_LDAP_START_TLS_S)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_start_tls, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_escape, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ignore, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#if defined(STR_TRANSLATION)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_t61_to_8859, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(STR_TRANSLATION)
#define arginfo_ldap_8859_to_t61 arginfo_ldap_t61_to_8859
#endif

#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_ldap_exop, 0, 2, LDAP\\Result, MAY_BE_BOOL)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, request_oid, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, request_data, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, controls, IS_ARRAY, 1, "NULL")
	ZEND_ARG_INFO(1, response_data)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, response_oid, "null")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_LDAP_PASSWD)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_exop_passwd, 0, 1, MAY_BE_STRING|MAY_BE_BOOL)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, user, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, old_password, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, new_password, IS_STRING, 0, "\"\"")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, controls, "null")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_LDAP_WHOAMI_S)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_exop_whoami, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_LDAP_REFRESH_S)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ldap_exop_refresh, 0, 3, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_TYPE_INFO(0, dn, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ttl, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_LDAP_PARSE_EXTENDED_RESULT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ldap_parse_exop, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ldap, LDAP\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, result, LDAP\\Result, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, response_data, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, response_oid, "null")
ZEND_END_ARG_INFO()
#endif


#if defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_connect);
#endif
#if !(defined(HAVE_ORALDAP))
ZEND_FUNCTION(ldap_connect);
#endif
ZEND_FUNCTION(ldap_unbind);
ZEND_FUNCTION(ldap_bind);
ZEND_FUNCTION(ldap_bind_ext);
#if defined(HAVE_LDAP_SASL)
ZEND_FUNCTION(ldap_sasl_bind);
#endif
ZEND_FUNCTION(ldap_read);
ZEND_FUNCTION(ldap_list);
ZEND_FUNCTION(ldap_search);
ZEND_FUNCTION(ldap_free_result);
ZEND_FUNCTION(ldap_count_entries);
ZEND_FUNCTION(ldap_first_entry);
ZEND_FUNCTION(ldap_next_entry);
ZEND_FUNCTION(ldap_get_entries);
ZEND_FUNCTION(ldap_first_attribute);
ZEND_FUNCTION(ldap_next_attribute);
ZEND_FUNCTION(ldap_get_attributes);
ZEND_FUNCTION(ldap_get_values_len);
ZEND_FUNCTION(ldap_get_dn);
ZEND_FUNCTION(ldap_explode_dn);
ZEND_FUNCTION(ldap_dn2ufn);
ZEND_FUNCTION(ldap_add);
ZEND_FUNCTION(ldap_add_ext);
ZEND_FUNCTION(ldap_delete);
ZEND_FUNCTION(ldap_delete_ext);
ZEND_FUNCTION(ldap_modify_batch);
ZEND_FUNCTION(ldap_mod_add);
ZEND_FUNCTION(ldap_mod_add_ext);
ZEND_FUNCTION(ldap_mod_replace);
ZEND_FUNCTION(ldap_mod_replace_ext);
ZEND_FUNCTION(ldap_mod_del);
ZEND_FUNCTION(ldap_mod_del_ext);
ZEND_FUNCTION(ldap_errno);
ZEND_FUNCTION(ldap_error);
ZEND_FUNCTION(ldap_err2str);
ZEND_FUNCTION(ldap_compare);
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_rename);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_rename_ext);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_get_option);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_set_option);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_count_references);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_first_reference);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
ZEND_FUNCTION(ldap_next_reference);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP) && defined(HAVE_LDAP_PARSE_REFERENCE)
ZEND_FUNCTION(ldap_parse_reference);
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP) && defined(HAVE_LDAP_PARSE_RESULT)
ZEND_FUNCTION(ldap_parse_result);
#endif
#if defined(LDAP_API_FEATURE_X_OPENLDAP) && defined(HAVE_3ARG_SETREBINDPROC)
ZEND_FUNCTION(ldap_set_rebind_proc);
#endif
#if defined(HAVE_LDAP_START_TLS_S)
ZEND_FUNCTION(ldap_start_tls);
#endif
ZEND_FUNCTION(ldap_escape);
#if defined(STR_TRANSLATION)
ZEND_FUNCTION(ldap_t61_to_8859);
#endif
#if defined(STR_TRANSLATION)
ZEND_FUNCTION(ldap_8859_to_t61);
#endif
#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
ZEND_FUNCTION(ldap_exop);
#endif
#if defined(HAVE_LDAP_PASSWD)
ZEND_FUNCTION(ldap_exop_passwd);
#endif
#if defined(HAVE_LDAP_WHOAMI_S)
ZEND_FUNCTION(ldap_exop_whoami);
#endif
#if defined(HAVE_LDAP_REFRESH_S)
ZEND_FUNCTION(ldap_exop_refresh);
#endif
#if defined(HAVE_LDAP_PARSE_EXTENDED_RESULT)
ZEND_FUNCTION(ldap_parse_exop);
#endif


static const zend_function_entry ext_functions[] = {
#if defined(HAVE_ORALDAP)
	ZEND_FE(ldap_connect, arginfo_ldap_connect)
#endif
#if !(defined(HAVE_ORALDAP))
	ZEND_FE(ldap_connect, arginfo_ldap_connect)
#endif
	ZEND_FE(ldap_unbind, arginfo_ldap_unbind)
	ZEND_FALIAS(ldap_close, ldap_unbind, arginfo_ldap_close)
	ZEND_FE(ldap_bind, arginfo_ldap_bind)
	ZEND_FE(ldap_bind_ext, arginfo_ldap_bind_ext)
#if defined(HAVE_LDAP_SASL)
	ZEND_FE(ldap_sasl_bind, arginfo_ldap_sasl_bind)
#endif
	ZEND_FE(ldap_read, arginfo_ldap_read)
	ZEND_FE(ldap_list, arginfo_ldap_list)
	ZEND_FE(ldap_search, arginfo_ldap_search)
	ZEND_FE(ldap_free_result, arginfo_ldap_free_result)
	ZEND_FE(ldap_count_entries, arginfo_ldap_count_entries)
	ZEND_FE(ldap_first_entry, arginfo_ldap_first_entry)
	ZEND_FE(ldap_next_entry, arginfo_ldap_next_entry)
	ZEND_FE(ldap_get_entries, arginfo_ldap_get_entries)
	ZEND_FE(ldap_first_attribute, arginfo_ldap_first_attribute)
	ZEND_FE(ldap_next_attribute, arginfo_ldap_next_attribute)
	ZEND_FE(ldap_get_attributes, arginfo_ldap_get_attributes)
	ZEND_FE(ldap_get_values_len, arginfo_ldap_get_values_len)
	ZEND_FALIAS(ldap_get_values, ldap_get_values_len, arginfo_ldap_get_values)
	ZEND_FE(ldap_get_dn, arginfo_ldap_get_dn)
	ZEND_FE(ldap_explode_dn, arginfo_ldap_explode_dn)
	ZEND_FE(ldap_dn2ufn, arginfo_ldap_dn2ufn)
	ZEND_FE(ldap_add, arginfo_ldap_add)
	ZEND_FE(ldap_add_ext, arginfo_ldap_add_ext)
	ZEND_FE(ldap_delete, arginfo_ldap_delete)
	ZEND_FE(ldap_delete_ext, arginfo_ldap_delete_ext)
	ZEND_FE(ldap_modify_batch, arginfo_ldap_modify_batch)
	ZEND_FE(ldap_mod_add, arginfo_ldap_mod_add)
	ZEND_FE(ldap_mod_add_ext, arginfo_ldap_mod_add_ext)
	ZEND_FE(ldap_mod_replace, arginfo_ldap_mod_replace)
	ZEND_FALIAS(ldap_modify, ldap_mod_replace, arginfo_ldap_modify)
	ZEND_FE(ldap_mod_replace_ext, arginfo_ldap_mod_replace_ext)
	ZEND_FE(ldap_mod_del, arginfo_ldap_mod_del)
	ZEND_FE(ldap_mod_del_ext, arginfo_ldap_mod_del_ext)
	ZEND_FE(ldap_errno, arginfo_ldap_errno)
	ZEND_FE(ldap_error, arginfo_ldap_error)
	ZEND_FE(ldap_err2str, arginfo_ldap_err2str)
	ZEND_FE(ldap_compare, arginfo_ldap_compare)
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
	ZEND_FE(ldap_rename, arginfo_ldap_rename)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
	ZEND_FE(ldap_rename_ext, arginfo_ldap_rename_ext)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
	ZEND_FE(ldap_get_option, arginfo_ldap_get_option)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
	ZEND_FE(ldap_set_option, arginfo_ldap_set_option)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
	ZEND_FE(ldap_count_references, arginfo_ldap_count_references)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
	ZEND_FE(ldap_first_reference, arginfo_ldap_first_reference)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)
	ZEND_FE(ldap_next_reference, arginfo_ldap_next_reference)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP) && defined(HAVE_LDAP_PARSE_REFERENCE)
	ZEND_FE(ldap_parse_reference, arginfo_ldap_parse_reference)
#endif
#if (LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP) && defined(HAVE_LDAP_PARSE_RESULT)
	ZEND_FE(ldap_parse_result, arginfo_ldap_parse_result)
#endif
#if defined(LDAP_API_FEATURE_X_OPENLDAP) && defined(HAVE_3ARG_SETREBINDPROC)
	ZEND_FE(ldap_set_rebind_proc, arginfo_ldap_set_rebind_proc)
#endif
#if defined(HAVE_LDAP_START_TLS_S)
	ZEND_FE(ldap_start_tls, arginfo_ldap_start_tls)
#endif
	ZEND_FE(ldap_escape, arginfo_ldap_escape)
#if defined(STR_TRANSLATION)
	ZEND_FE(ldap_t61_to_8859, arginfo_ldap_t61_to_8859)
#endif
#if defined(STR_TRANSLATION)
	ZEND_FE(ldap_8859_to_t61, arginfo_ldap_8859_to_t61)
#endif
#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
	ZEND_FE(ldap_exop, arginfo_ldap_exop)
#endif
#if defined(HAVE_LDAP_PASSWD)
	ZEND_FE(ldap_exop_passwd, arginfo_ldap_exop_passwd)
#endif
#if defined(HAVE_LDAP_WHOAMI_S)
	ZEND_FE(ldap_exop_whoami, arginfo_ldap_exop_whoami)
#endif
#if defined(HAVE_LDAP_REFRESH_S)
	ZEND_FE(ldap_exop_refresh, arginfo_ldap_exop_refresh)
#endif
#if defined(HAVE_LDAP_PARSE_EXTENDED_RESULT)
	ZEND_FE(ldap_parse_exop, arginfo_ldap_parse_exop)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_LDAP_Connection_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_LDAP_Result_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_LDAP_ResultEntry_methods[] = {
	ZEND_FE_END
};

static void register_ldap_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("LDAP_DEREF_NEVER", LDAP_DEREF_NEVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_DEREF_SEARCHING", LDAP_DEREF_SEARCHING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_DEREF_FINDING", LDAP_DEREF_FINDING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_DEREF_ALWAYS", LDAP_DEREF_ALWAYS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_MODIFY_BATCH_ADD", LDAP_MODIFY_BATCH_ADD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_MODIFY_BATCH_REMOVE", LDAP_MODIFY_BATCH_REMOVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_MODIFY_BATCH_REMOVE_ALL", LDAP_MODIFY_BATCH_REMOVE_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_MODIFY_BATCH_REPLACE", LDAP_MODIFY_BATCH_REPLACE, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("LDAP_MODIFY_BATCH_ATTRIB", LDAP_MODIFY_BATCH_ATTRIB, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("LDAP_MODIFY_BATCH_MODTYPE", LDAP_MODIFY_BATCH_MODTYPE, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("LDAP_MODIFY_BATCH_VALUES", LDAP_MODIFY_BATCH_VALUES, CONST_PERSISTENT);
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_DEREF", LDAP_OPT_DEREF, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_SIZELIMIT", LDAP_OPT_SIZELIMIT, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_TIMELIMIT", LDAP_OPT_TIMELIMIT, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)) && defined(LDAP_OPT_NETWORK_TIMEOUT)
	REGISTER_LONG_CONSTANT("LDAP_OPT_NETWORK_TIMEOUT", LDAP_OPT_NETWORK_TIMEOUT, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)) && (!defined(LDAP_OPT_NETWORK_TIMEOUT) && defined(LDAP_X_OPT_CONNECT_TIMEOUT))
	REGISTER_LONG_CONSTANT("LDAP_OPT_NETWORK_TIMEOUT", LDAP_X_OPT_CONNECT_TIMEOUT, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)) && defined(LDAP_OPT_TIMEOUT)
	REGISTER_LONG_CONSTANT("LDAP_OPT_TIMEOUT", LDAP_OPT_TIMEOUT, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_PROTOCOL_VERSION", LDAP_OPT_PROTOCOL_VERSION, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_ERROR_NUMBER", LDAP_OPT_ERROR_NUMBER, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_REFERRALS", LDAP_OPT_REFERRALS, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)) && defined(LDAP_OPT_RESTART)
	REGISTER_LONG_CONSTANT("LDAP_OPT_RESTART", LDAP_OPT_RESTART, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)) && defined(LDAP_OPT_HOST_NAME)
	REGISTER_LONG_CONSTANT("LDAP_OPT_HOST_NAME", LDAP_OPT_HOST_NAME, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_ERROR_STRING", LDAP_OPT_ERROR_STRING, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP)) && defined(LDAP_OPT_MATCHED_DN)
	REGISTER_LONG_CONSTANT("LDAP_OPT_MATCHED_DN", LDAP_OPT_MATCHED_DN, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_SERVER_CONTROLS", LDAP_OPT_SERVER_CONTROLS, CONST_PERSISTENT);
#endif
#if ((LDAP_API_VERSION > 2000) || defined(HAVE_ORALDAP))
	REGISTER_LONG_CONSTANT("LDAP_OPT_CLIENT_CONTROLS", LDAP_OPT_CLIENT_CONTROLS, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_DEBUG_LEVEL)
	REGISTER_LONG_CONSTANT("LDAP_OPT_DEBUG_LEVEL", LDAP_OPT_DEBUG_LEVEL, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_DIAGNOSTIC_MESSAGE)
	REGISTER_LONG_CONSTANT("LDAP_OPT_DIAGNOSTIC_MESSAGE", LDAP_OPT_DIAGNOSTIC_MESSAGE, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_SASL)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_SASL_MECH", LDAP_OPT_X_SASL_MECH, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_SASL)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_SASL_REALM", LDAP_OPT_X_SASL_REALM, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_SASL)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_SASL_AUTHCID", LDAP_OPT_X_SASL_AUTHCID, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_SASL)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_SASL_AUTHZID", LDAP_OPT_X_SASL_AUTHZID, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_SASL_NOCANON)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_SASL_NOCANON", LDAP_OPT_X_SASL_NOCANON, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_SASL_USERNAME)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_SASL_USERNAME", LDAP_OPT_X_SASL_USERNAME, CONST_PERSISTENT);
#endif
#if defined(ORALDAP)
	REGISTER_LONG_CONSTANT("GSLC_SSL_NO_AUTH", GSLC_SSL_NO_AUTH, CONST_PERSISTENT);
#endif
#if defined(ORALDAP)
	REGISTER_LONG_CONSTANT("GSLC_SSL_ONEWAY_AUTH", GSLC_SSL_ONEWAY_AUTH, CONST_PERSISTENT);
#endif
#if defined(ORALDAP)
	REGISTER_LONG_CONSTANT("GSLC_SSL_TWOWAY_AUTH", GSLC_SSL_TWOWAY_AUTH, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_REQUIRE_CERT", LDAP_OPT_X_TLS_REQUIRE_CERT, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_NEVER", LDAP_OPT_X_TLS_NEVER, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_HARD", LDAP_OPT_X_TLS_HARD, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_DEMAND", LDAP_OPT_X_TLS_DEMAND, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_ALLOW", LDAP_OPT_X_TLS_ALLOW, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_TRY", LDAP_OPT_X_TLS_TRY, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CACERTDIR", LDAP_OPT_X_TLS_CACERTDIR, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CACERTFILE", LDAP_OPT_X_TLS_CACERTFILE, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CERTFILE", LDAP_OPT_X_TLS_CERTFILE, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CIPHER_SUITE", LDAP_OPT_X_TLS_CIPHER_SUITE, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_KEYFILE", LDAP_OPT_X_TLS_KEYFILE, CONST_PERSISTENT);
#endif
#if (LDAP_API_VERSION > 2000)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_RANDOM_FILE", LDAP_OPT_X_TLS_RANDOM_FILE, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_CRLCHECK)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CRLCHECK", LDAP_OPT_X_TLS_CRLCHECK, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_CRLCHECK)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CRL_NONE", LDAP_OPT_X_TLS_CRL_NONE, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_CRLCHECK)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CRL_PEER", LDAP_OPT_X_TLS_CRL_PEER, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_CRLCHECK)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CRL_ALL", LDAP_OPT_X_TLS_CRL_ALL, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_DHFILE)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_DHFILE", LDAP_OPT_X_TLS_DHFILE, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_CRLFILE)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_CRLFILE", LDAP_OPT_X_TLS_CRLFILE, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_PROTOCOL_MIN)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_PROTOCOL_MIN", LDAP_OPT_X_TLS_PROTOCOL_MIN, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_PROTOCOL_MIN)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_PROTOCOL_SSL2", LDAP_OPT_X_TLS_PROTOCOL_SSL2, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_PROTOCOL_MIN)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_PROTOCOL_SSL3", LDAP_OPT_X_TLS_PROTOCOL_SSL3, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_PROTOCOL_MIN)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_PROTOCOL_TLS1_0", LDAP_OPT_X_TLS_PROTOCOL_TLS1_0, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_PROTOCOL_MIN)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_PROTOCOL_TLS1_1", LDAP_OPT_X_TLS_PROTOCOL_TLS1_1, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_PROTOCOL_MIN)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_PROTOCOL_TLS1_2", LDAP_OPT_X_TLS_PROTOCOL_TLS1_2, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_TLS_PACKAGE)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_TLS_PACKAGE", LDAP_OPT_X_TLS_PACKAGE, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_KEEPALIVE_IDLE)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_KEEPALIVE_IDLE", LDAP_OPT_X_KEEPALIVE_IDLE, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_KEEPALIVE_IDLE)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_KEEPALIVE_PROBES", LDAP_OPT_X_KEEPALIVE_PROBES, CONST_PERSISTENT);
#endif
#if defined(LDAP_OPT_X_KEEPALIVE_IDLE)
	REGISTER_LONG_CONSTANT("LDAP_OPT_X_KEEPALIVE_INTERVAL", LDAP_OPT_X_KEEPALIVE_INTERVAL, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("LDAP_ESCAPE_FILTER", PHP_LDAP_ESCAPE_FILTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LDAP_ESCAPE_DN", PHP_LDAP_ESCAPE_DN, CONST_PERSISTENT);
#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
	REGISTER_STRING_CONSTANT("LDAP_EXOP_START_TLS", LDAP_EXOP_START_TLS, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
	REGISTER_STRING_CONSTANT("LDAP_EXOP_MODIFY_PASSWD", LDAP_EXOP_MODIFY_PASSWD, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
	REGISTER_STRING_CONSTANT("LDAP_EXOP_REFRESH", LDAP_EXOP_REFRESH, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
	REGISTER_STRING_CONSTANT("LDAP_EXOP_WHO_AM_I", LDAP_EXOP_WHO_AM_I, CONST_PERSISTENT);
#endif
#if defined(HAVE_LDAP_EXTENDED_OPERATION_S)
	REGISTER_STRING_CONSTANT("LDAP_EXOP_TURN", LDAP_EXOP_TURN, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_MANAGEDSAIT)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_MANAGEDSAIT", LDAP_CONTROL_MANAGEDSAIT, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_PROXY_AUTHZ)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_PROXY_AUTHZ", LDAP_CONTROL_PROXY_AUTHZ, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_SUBENTRIES)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_SUBENTRIES", LDAP_CONTROL_SUBENTRIES, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_VALUESRETURNFILTER)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_VALUESRETURNFILTER", LDAP_CONTROL_VALUESRETURNFILTER, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_ASSERT)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_ASSERT", LDAP_CONTROL_ASSERT, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_ASSERT)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_PRE_READ", LDAP_CONTROL_PRE_READ, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_ASSERT)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_POST_READ", LDAP_CONTROL_POST_READ, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_SORTREQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_SORTREQUEST", LDAP_CONTROL_SORTREQUEST, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_SORTREQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_SORTRESPONSE", LDAP_CONTROL_SORTRESPONSE, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_PAGEDRESULTS)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_PAGEDRESULTS", LDAP_CONTROL_PAGEDRESULTS, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_AUTHZID_REQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_AUTHZID_REQUEST", LDAP_CONTROL_AUTHZID_REQUEST, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_AUTHZID_REQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_AUTHZID_RESPONSE", LDAP_CONTROL_AUTHZID_RESPONSE, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_SYNC)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_SYNC", LDAP_CONTROL_SYNC, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_SYNC)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_SYNC_STATE", LDAP_CONTROL_SYNC_STATE, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_SYNC)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_SYNC_DONE", LDAP_CONTROL_SYNC_DONE, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_DONTUSECOPY)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_DONTUSECOPY", LDAP_CONTROL_DONTUSECOPY, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_PASSWORDPOLICYREQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_PASSWORDPOLICYREQUEST", LDAP_CONTROL_PASSWORDPOLICYREQUEST, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_PASSWORDPOLICYREQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_PASSWORDPOLICYRESPONSE", LDAP_CONTROL_PASSWORDPOLICYRESPONSE, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_X_INCREMENTAL_VALUES)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_X_INCREMENTAL_VALUES", LDAP_CONTROL_X_INCREMENTAL_VALUES, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_X_INCREMENTAL_VALUES)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_X_DOMAIN_SCOPE", LDAP_CONTROL_X_DOMAIN_SCOPE, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_X_INCREMENTAL_VALUES)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_X_PERMISSIVE_MODIFY", LDAP_CONTROL_X_PERMISSIVE_MODIFY, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_X_INCREMENTAL_VALUES)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_X_SEARCH_OPTIONS", LDAP_CONTROL_X_SEARCH_OPTIONS, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_X_INCREMENTAL_VALUES)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_X_TREE_DELETE", LDAP_CONTROL_X_TREE_DELETE, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_X_INCREMENTAL_VALUES)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_X_EXTENDED_DN", LDAP_CONTROL_X_EXTENDED_DN, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_VLVREQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_VLVREQUEST", LDAP_CONTROL_VLVREQUEST, CONST_PERSISTENT);
#endif
#if defined(LDAP_CONTROL_VLVREQUEST)
	REGISTER_STRING_CONSTANT("LDAP_CONTROL_VLVRESPONSE", LDAP_CONTROL_VLVRESPONSE, CONST_PERSISTENT);
#endif

#if defined(HAVE_ORALDAP)

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "ldap_connect", sizeof("ldap_connect") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#endif

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "ldap_bind", sizeof("ldap_bind") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "ldap_bind_ext", sizeof("ldap_bind_ext") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#if defined(HAVE_LDAP_SASL)

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "ldap_sasl_bind", sizeof("ldap_sasl_bind") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#endif
#if defined(HAVE_LDAP_PASSWD)

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "ldap_exop_passwd", sizeof("ldap_exop_passwd") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "ldap_exop_passwd", sizeof("ldap_exop_passwd") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#endif
}

static zend_class_entry *register_class_LDAP_Connection(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "LDAP", "Connection", class_LDAP_Connection_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_LDAP_Result(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "LDAP", "Result", class_LDAP_Result_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}

static zend_class_entry *register_class_LDAP_ResultEntry(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "LDAP", "ResultEntry", class_LDAP_ResultEntry_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE;

	return class_entry;
}
