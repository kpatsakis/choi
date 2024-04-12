void fun()
{
  int entity_8 = 23;
  char entity_9[65] = "";
  entity_9 = NULL;
  memset(entity_9, 'Q', 65-1);
  entity_9[65-1]='';
  entity_9[entity_8] = 'O';
}