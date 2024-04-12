void fun()
{
  int entity_2 = 68;
  entity_2 = 65;
  char entity_0[44] = "";
  entity_0 = NULL;
  char entity_4[87] = "";
  entity_4 = NULL;
  char entity_8 = 'k';
  memset(entity_4, 'b', 87-1);
  entity_4[87-1]='';
  memset(entity_0, 'n', 44-1);
  entity_0[44-1]='';
  entity_4[entity_2] = 'b';
}