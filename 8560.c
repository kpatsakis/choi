void fun()
{
  int entity_3 = 55;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_0 = 'H';
  memset(entity_1, 'z', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[43] = 'R';
}