void fun()
{
  int entity_0 = 11;
  int entity_4 = 65;
  char entity_8[64] = "";
  entity_8 = NULL;
  char entity_2[71] = "";
  entity_2 = NULL;
  memset(entity_8, 'G', 64-1);
  entity_8[64-1]='';
  memset(entity_2, 'i', 71-1);
  entity_2[71-1]='';
  entity_4 = 9;
  entity_2[entity_4] = 'k';
}