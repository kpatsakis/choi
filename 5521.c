void fun()
{
  int entity_4 = 10;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'p', entity_4-1);
  entity_9[entity_4-1]='';
  entity_4 = 14;
  entity_9[100] = 'Z';
}