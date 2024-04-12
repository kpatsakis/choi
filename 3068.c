void fun()
{
  int entity_5 = 11;
  char entity_8 = 'b';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_7[48] = "";
  entity_7 = NULL;
  memset(entity_1, 'i', entity_5-1);
  entity_1[entity_5-1]='';
  memset(entity_7, 'a', 48-1);
  entity_7[48-1]='';
  entity_1[100] = 'l';
}