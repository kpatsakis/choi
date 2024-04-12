void fun()
{
  int entity_3 = 56;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'o', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[35] = 'm';
}