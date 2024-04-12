void fun()
{
  int entity_6 = 68;
  entity_6 = 42;
  char entity_2 = 'h';
  char entity_7[33] = "";
  entity_7 = NULL;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_8 = 'D';
  memset(entity_7, 'D', 33-1);
  entity_7[33-1]='';
  memset(entity_5, 'l', entity_6-1);
  entity_5[entity_6-1]='';
  entity_5[84] = 'B';
}