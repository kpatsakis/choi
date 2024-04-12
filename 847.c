void fun()
{
  int entity_6 = 88;
  int entity_9 = 38;
  char entity_1[92] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', 92-1);
  entity_1[92-1]='';
  entity_6 = 52;
  entity_1[entity_6] = 'x';
}