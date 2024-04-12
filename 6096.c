void fun()
{
  int entity_9 = 46;
  char entity_4[63] = "";
  entity_4 = NULL;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_4, 'a', 63-1);
  entity_4[63-1]='';
  entity_2[36] = 'Q';
}