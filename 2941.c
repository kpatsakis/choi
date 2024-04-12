void fun()
{
  int entity_5 = 45;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_4[44] = "";
  entity_4 = NULL;
  memset(entity_7, 'm', entity_5-1);
  entity_7[entity_5-1]='';
  memset(entity_4, 'R', 44-1);
  entity_4[44-1]='';
  entity_7[28] = 'R';
}