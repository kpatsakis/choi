void fun()
{
  int entity_2 = 1;
  int entity_4 = 22;
  entity_4 = 66;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'J', entity_4-1);
  entity_9[entity_4-1]='';
  entity_9[40] = 'y';
}