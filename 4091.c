void fun()
{
  int entity_9 = 84;
  entity_9 = 13;
  char entity_2[4] = "";
  entity_2 = NULL;
  memset(entity_2, 'a', 4-1);
  entity_2[4-1]='';
  entity_2[entity_9] = 'c';
}