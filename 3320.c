void fun()
{
  int entity_0 = 5;
  char entity_4[64] = "";
  entity_4 = NULL;
  memset(entity_4, 'Z', 64-1);
  entity_4[64-1]='';
  entity_4[entity_0] = 'G';
}