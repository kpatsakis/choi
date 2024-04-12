void fun()
{
  int entity_1 = 13;
  int entity_2 = 93;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_9[42] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', 42-1);
  entity_9[42-1]='';
  memset(entity_6, 'z', entity_2-1);
  entity_6[entity_2-1]='';
  entity_2 = 33;
  entity_6[15] = 'f';
}