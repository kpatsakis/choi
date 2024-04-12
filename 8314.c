void fun()
{
  int entity_2 = 85;
  char entity_7[1] = "";
  entity_7 = NULL;
  memset(entity_7, 'K', 1-1);
  entity_7[1-1]='';
  entity_7[entity_2] = 'p';
}