void fun()
{
  int entity_0 = 78;
  int entity_5 = 25;
  char entity_4[35] = "";
  entity_4 = NULL;
  char entity_9[57] = "";
  entity_9 = NULL;
  memset(entity_9, 'N', 57-1);
  entity_9[57-1]='';
  memset(entity_4, 't', 35-1);
  entity_4[35-1]='';
  entity_9[entity_5] = 'Q';
}