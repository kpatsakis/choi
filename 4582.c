void fun()
{
  int entity_5 = 96;
  int entity_8 = 83;
  char entity_1 = 'h';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_4[71] = "";
  entity_4 = NULL;
  memset(entity_2, 'E', entity_5-1);
  entity_2[entity_5-1]='';
  memset(entity_4, 'z', 71-1);
  entity_4[71-1]='';
  entity_2[63] = 's';
}