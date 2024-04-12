void fun()
{
  int entity_9 = 56;
  char entity_3 = 'f';
  char entity_1[37] = "";
  entity_1 = NULL;
  memset(entity_1, 'X', 37-1);
  entity_1[37-1]='';
  entity_1[entity_9] = 'T';
}