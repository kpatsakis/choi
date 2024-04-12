void fun()
{
  int entity_3 = 40;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char entity_8[70] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', 70-1);
  entity_8[70-1]='';
  memset(entity_5, 'y', entity_3-1);
  entity_5[entity_3-1]='';
  entity_3 = 33;
  entity_5[99] = 'v';
}