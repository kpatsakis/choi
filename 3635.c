void fun()
{
  int entity_1 = 7;
  char entity_7[33] = "";
  entity_7 = NULL;
  char entity_8 = 'B';
  memset(entity_7, 'Q', 33-1);
  entity_7[33-1]='';
  entity_1 = 14;
  entity_7[entity_1] = 'Y';
}