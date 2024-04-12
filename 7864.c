void fun()
{
  int entity_4 = 65;
  entity_4 = 3;
  char entity_8[11] = "";
  entity_8 = NULL;
  char entity_0[87] = "";
  entity_0 = NULL;
  char entity_5 = 'v';
  memset(entity_0, 'I', 87-1);
  entity_0[87-1]='';
  memset(entity_8, 'X', 11-1);
  entity_8[11-1]='';
  entity_8[entity_4] = 'K';
}