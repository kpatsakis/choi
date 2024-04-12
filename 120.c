void fun()
{
  int entity_9 = 57;
  char entity_3[61] = "";
  entity_3 = NULL;
  char entity_5[31] = "";
  entity_5 = NULL;
  char entity_6[39] = "";
  entity_6 = NULL;
  memset(entity_6, 'V', 39-1);
  entity_6[39-1]='';
  memset(entity_3, 'N', 61-1);
  entity_3[61-1]='';
  memset(entity_5, 'u', 31-1);
  entity_5[31-1]='';
  entity_9 = 88;
  entity_5[entity_9] = 'p';
}