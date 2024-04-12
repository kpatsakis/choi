void fun()
{
  int entity_3 = 87;
  int entity_2 = 60;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_4 = 'I';
  memset(entity_1, 'T', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[12] = 'v';
}