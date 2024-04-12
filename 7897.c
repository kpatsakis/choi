void fun()
{
  int entity_6 = 41;
  char entity_2[87] = "";
  entity_2 = NULL;
  char entity_3[5] = "";
  entity_3 = NULL;
  char entity_7[51] = "";
  entity_7 = NULL;
  memset(entity_3, 'w', 5-1);
  entity_3[5-1]='';
  memset(entity_7, 'F', 51-1);
  entity_7[51-1]='';
  memset(entity_2, 'Q', 87-1);
  entity_2[87-1]='';
  entity_6 = 86;
  entity_2[entity_6] = 'G';
}