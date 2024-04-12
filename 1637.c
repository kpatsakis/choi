void fun()
{
  int entity_0 = 49;
  char entity_3 = 'k';
  char entity_8[87] = "";
  entity_8 = NULL;
  char entity_5[77] = "";
  entity_5 = NULL;
  memset(entity_8, 'q', 87-1);
  entity_8[87-1]='';
  memset(entity_5, 'q', 77-1);
  entity_5[77-1]='';
  entity_0 = 90;
  entity_8[entity_0] = 'x';
}