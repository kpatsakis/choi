void fun()
{
  int entity_3 = 3;
  int entity_6 = 62;
  char entity_8[21] = "";
  entity_8 = NULL;
  char entity_5[9] = "";
  entity_5 = NULL;
  memset(entity_8, 'C', 21-1);
  entity_8[21-1]='';
  memset(entity_5, 'F', 9-1);
  entity_5[9-1]='';
  entity_6 = 87;
  entity_8[entity_6] = 'X';
}