void fun()
{
  int entity_1 = 67;
  char entity_2 = 'o';
  char entity_8[64] = "";
  entity_8 = NULL;
  memset(entity_8, 'Z', 64-1);
  entity_8[64-1]='';
  entity_8[entity_1] = 'S';
}