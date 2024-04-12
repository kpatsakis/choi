void fun()
{
  int entity_0 = 4;
  entity_0 = 70;
  char entity_6[81] = "";
  entity_6 = NULL;
  char entity_3[26] = "";
  entity_3 = NULL;
  memset(entity_3, 'u', 26-1);
  entity_3[26-1]='';
  memset(entity_6, 'w', 81-1);
  entity_6[81-1]='';
  entity_6[entity_0] = 'o';
}