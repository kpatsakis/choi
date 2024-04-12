void fun()
{
  int entity_5 = 40;
  int entity_4 = 1;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char entity_2[55] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', 55-1);
  entity_2[55-1]='';
  memset(entity_8, 'D', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[78] = 'B';
}