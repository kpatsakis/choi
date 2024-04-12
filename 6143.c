void fun()
{
  int entity_6 = 46;
  int entity_2 = 42;
  entity_6 = 61;
  char entity_8[3] = "";
  entity_8 = NULL;
  char entity_3[4] = "";
  entity_3 = NULL;
  memset(entity_3, 'f', 4-1);
  entity_3[4-1]='';
  memset(entity_8, 'M', 3-1);
  entity_8[3-1]='';
  entity_8[entity_6] = 't';
}