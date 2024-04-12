void fun()
{
  int entity_8 = 41;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_2[26] = "";
  entity_2 = NULL;
  memset(entity_2, 'z', 26-1);
  entity_2[26-1]='';
  memset(entity_6, 'g', entity_8-1);
  entity_6[entity_8-1]='';
  entity_6[46] = 'L';
}