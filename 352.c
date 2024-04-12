void fun()
{
  int entity_2 = 93;
  char entity_7 = 'V';
  char entity_8 = 'h';
  char entity_9[15] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', 15-1);
  entity_9[15-1]='';
  entity_9[entity_2] = 'r';
}