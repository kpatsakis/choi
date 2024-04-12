void fun()
{
  int entity_1 = 50;
  int entity_0 = 43;
  int entity_7 = 21;
  char entity_3[64] = "";
  entity_3 = NULL;
  memset(entity_3, 'C', 64-1);
  entity_3[64-1]='';
  entity_3[entity_7] = 'Z';
}