void fun()
{
  int entity_1 = 62;
  char entity_4[99] = "";
  entity_4 = NULL;
  char entity_9[42] = "";
  entity_9 = NULL;
  memset(entity_4, 'X', 99-1);
  entity_4[99-1]='';
  memset(entity_9, 'r', 42-1);
  entity_9[42-1]='';
  entity_4[entity_1] = 'q';
}