void fun()
{
  int entity_5 = 9;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'I', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 15;
  entity_9[65] = 'f';
}