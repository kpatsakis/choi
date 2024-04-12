void fun()
{
  int entity_8 = 26;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char entity_6[11] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 11-1);
  entity_6[11-1]='';
  memset(entity_3, 'i', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[65] = 'n';
}