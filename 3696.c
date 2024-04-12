void fun()
{
  int entity_3 = 21;
  char entity_9[69] = "";
  entity_9 = NULL;
  char entity_4 = 'p';
  memset(entity_9, 'T', 69-1);
  entity_9[69-1]='';
  entity_9[entity_3] = 'q';
}