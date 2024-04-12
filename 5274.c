void fun()
{
  char entity_8 = 'l';
  char entity_3[30] = "";
  entity_3 = NULL;
  memset(entity_3, 'V', 30-1);
  entity_3[30-1]='';
  entity_3[97] = 's';
}