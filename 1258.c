void fun()
{
  int entity_3 = 49;
  char entity_9 = 'f';
  char entity_1[32] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', 32-1);
  entity_1[32-1]='';
  entity_1[entity_3] = 'R';
}