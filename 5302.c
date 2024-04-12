void fun()
{
  int entity_4 = 33;
  int entity_8 = 16;
  int entity_9 = 13;
  char entity_1[24] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', 24-1);
  entity_1[24-1]='';
  entity_1[entity_8] = 'I';
}