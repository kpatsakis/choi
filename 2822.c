void fun()
{
  int entity_8 = 52;
  char entity_6[81] = "";
  entity_6 = NULL;
  char entity_7[98] = "";
  entity_7 = NULL;
  char entity_2[32] = "";
  entity_2 = NULL;
  memset(entity_2, 'z', 32-1);
  entity_2[32-1]='';
  memset(entity_7, 'u', 98-1);
  entity_7[98-1]='';
  memset(entity_6, 'k', 81-1);
  entity_6[81-1]='';
  entity_2[70] = 'F';
}