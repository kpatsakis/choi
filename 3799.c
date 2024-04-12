void fun()
{
  int entity_3 = 88;
  int entity_7 = 2;
  char entity_2[65] = "";
  entity_2 = NULL;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_2, 'L', 65-1);
  entity_2[65-1]='';
  memset(entity_6, 'I', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[44] = 'D';
}