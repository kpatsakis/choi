void fun()
{
  int entity_1 = 78;
  entity_1 = 43;
  char entity_6[44] = "";
  entity_6 = NULL;
  memset(entity_6, 'v', 44-1);
  entity_6[44-1]='';
  entity_6[entity_1] = 'A';
}