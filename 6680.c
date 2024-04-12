void fun()
{
  int entity_1 = 25;
  char entity_9[62] = "";
  entity_9 = NULL;
  memset(entity_9, 'K', 62-1);
  entity_9[62-1]='';
  entity_9[58] = 'p';
}