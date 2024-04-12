void fun()
{
  int entity_8 = 37;
  int entity_6 = 86;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_7[60] = "";
  entity_7 = NULL;
  memset(entity_7, 'f', 60-1);
  entity_7[60-1]='';
  memset(entity_5, 'W', entity_6-1);
  entity_5[entity_6-1]='';
  entity_5[90] = 'l';
}