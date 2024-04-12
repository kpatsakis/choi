void fun()
{
  int entity_1 = 21;
  entity_1 = 79;
  char entity_8[21] = "";
  entity_8 = NULL;
  char entity_6[19] = "";
  entity_6 = NULL;
  memset(entity_8, 'z', 21-1);
  entity_8[21-1]='';
  memset(entity_6, 'p', 19-1);
  entity_6[19-1]='';
  entity_8[entity_1] = 't';
}