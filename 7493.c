void fun()
{
  int entity_6 = 84;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_9, 'H', entity_6-1);
  entity_9[entity_6-1]='';
  entity_6 = 100;
  entity_9[72] = 'P';
}