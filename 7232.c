void fun()
{
  int entity_8 = 13;
  char entity_5[4] = "";
  entity_5 = NULL;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_5, 'p', 4-1);
  entity_5[4-1]='';
  memset(entity_4, 'B', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[47] = 'd';
}