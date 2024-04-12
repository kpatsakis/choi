void fun()
{
  int entity_0 = 38;
  entity_0 = 53;
  char entity_5[31] = "";
  entity_5 = NULL;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_8[10] = "";
  entity_8 = NULL;
  memset(entity_5, 'f', 31-1);
  entity_5[31-1]='';
  memset(entity_3, 'm', entity_0-1);
  entity_3[entity_0-1]='';
  memset(entity_8, 'V', 10-1);
  entity_8[10-1]='';
  entity_3[79] = 'M';
}