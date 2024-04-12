void fun()
{
  int entity_1 = 68;
  char entity_2[6] = "";
  entity_2 = NULL;
  char entity_8[49] = "";
  entity_8 = NULL;
  memset(entity_8, 'u', 49-1);
  entity_8[49-1]='';
  memset(entity_2, 'k', 6-1);
  entity_2[6-1]='';
  entity_1 = 56;
  entity_2[entity_1] = 'N';
}