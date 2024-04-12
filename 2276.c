void fun()
{
  int entity_4 = 49;
  char entity_6[70] = "";
  entity_6 = NULL;
  char entity_8[55] = "";
  entity_8 = NULL;
  char entity_5 = 's';
  memset(entity_6, 'C', 70-1);
  entity_6[70-1]='';
  memset(entity_8, 'N', 55-1);
  entity_8[55-1]='';
  entity_4 = 74;
  entity_8[entity_4] = 'z';
}