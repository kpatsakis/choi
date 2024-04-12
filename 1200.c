void fun()
{
  int entity_0 = 29;
  int entity_8 = 91;
  entity_8 = 22;
  char entity_2[48] = "";
  entity_2 = NULL;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'X', entity_8-1);
  entity_3[entity_8-1]='';
  memset(entity_2, 'F', 48-1);
  entity_2[48-1]='';
  entity_3[84] = 'g';
}