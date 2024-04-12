void fun()
{
  int entity_0 = 7;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char entity_7[40] = "";
  entity_7 = NULL;
  char entity_9 = 'y';
  memset(entity_7, 'w', 40-1);
  entity_7[40-1]='';
  memset(entity_5, 'z', entity_0-1);
  entity_5[entity_0-1]='';
  entity_5[37] = 'e';
}