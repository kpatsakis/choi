void fun()
{
  int entity_4 = 43;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'I', entity_4-1);
  entity_9[entity_4-1]='';
  entity_9[2] = 'd';
}