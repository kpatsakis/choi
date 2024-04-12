void fun()
{
  int entity_1 = 94;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'N', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[64] = 'B';
}