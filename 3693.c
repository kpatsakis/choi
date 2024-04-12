void fun()
{
  char entity_3 = 'Z';
  char entity_1[46] = "";
  entity_1 = NULL;
  char entity_7[5] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', 5-1);
  entity_7[5-1]='';
  memset(entity_1, 'X', 46-1);
  entity_1[46-1]='';
  entity_1[67] = 'U';
}