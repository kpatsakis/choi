void fun()
{
  int entity_8 = 50;
  int entity_3 = 45;
  entity_3 = 75;
  char entity_5[12] = "";
  entity_5 = NULL;
  char entity_1[97] = "";
  entity_1 = NULL;
  char entity_7 = 'h';
  memset(entity_1, 'M', 97-1);
  entity_1[97-1]='';
  memset(entity_5, 'G', 12-1);
  entity_5[12-1]='';
  entity_5[entity_3] = 'b';
}