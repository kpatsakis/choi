void fun()
{
  int entity_9 = 65;
  char entity_6[15] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 15-1);
  entity_6[15-1]='';
  entity_6[entity_9] = 'b';
}