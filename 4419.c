void fun()
{
  int entity_9 = 24;
  char entity_2[17] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 17-1);
  entity_2[17-1]='';
  entity_9 = 78;
  entity_2[entity_9] = 'o';
}