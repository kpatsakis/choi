void fun()
{
  int entity_1 = 49;
  char entity_4[64] = "";
  entity_4 = NULL;
  char entity_6 = 'E';
  memset(entity_4, 'j', 64-1);
  entity_4[64-1]='';
  entity_1 = 29;
  entity_4[entity_1] = 'p';
}