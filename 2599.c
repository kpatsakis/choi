void fun()
{
  int entity_8 = 55;
  int entity_3 = 24;
  char entity_9[89] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', 89-1);
  entity_9[89-1]='';
  entity_9[entity_3] = 'J';
}