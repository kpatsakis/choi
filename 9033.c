void fun()
{
  int entity_2 = 12;
  int entity_9 = 89;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char entity_7 = 't';
  memset(entity_6, 'O', entity_9-1);
  entity_6[entity_9-1]='';
  entity_6[13] = 'Q';
}