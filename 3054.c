void fun()
{
  int entity_4 = 75;
  char entity_2[41] = "";
  entity_2 = NULL;
  memset(entity_2, 'P', 41-1);
  entity_2[41-1]='';
  entity_4 = 79;
  entity_2[entity_4] = 'E';
}