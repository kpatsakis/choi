void fun()
{
  char entity_5[97] = "";
  entity_5 = NULL;
  char entity_1[38] = "";
  entity_1 = NULL;
  memset(entity_5, 'Y', 97-1);
  entity_5[97-1]='';
  memset(entity_1, 'X', 38-1);
  entity_1[38-1]='';
  entity_5[52] = 'V';
}