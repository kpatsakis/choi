void fun()
{
  int entity_1 = 60;
  char entity_7[17] = "";
  entity_7 = NULL;
  char entity_4[19] = "";
  entity_4 = NULL;
  memset(entity_4, 'h', 19-1);
  entity_4[19-1]='';
  memset(entity_7, 'H', 17-1);
  entity_7[17-1]='';
  entity_4[entity_1] = 'y';
}