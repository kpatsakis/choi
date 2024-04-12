void fun()
{
  int entity_8 = 75;
  int entity_3 = 32;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 't', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[7] = 'a';
}