void fun()
{
  int entity_7 = 3;
  int entity_4 = 83;
  char entity_5 = 'I';
  char entity_1[15] = "";
  entity_1 = NULL;
  memset(entity_1, 'U', 15-1);
  entity_1[15-1]='';
  entity_1[entity_7] = 'G';
}