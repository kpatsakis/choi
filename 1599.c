void fun()
{
  int entity_7 = 24;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_4[86] = "";
  entity_4 = NULL;
  memset(entity_5, 'I', entity_7-1);
  entity_5[entity_7-1]='';
  memset(entity_4, 'd', 86-1);
  entity_4[86-1]='';
  entity_7 = 2;
  entity_5[22] = 'Q';
}