void fun()
{
  int entity_4 = 35;
  entity_4 = 75;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char entity_8 = 'W';
  char entity_3 = 'L';
  memset(entity_5, 'D', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[98] = 'Y';
}