void fun()
{
  int entity_9 = 45;
  char entity_6[55] = "";
  entity_6 = NULL;
  char entity_4[7] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', 7-1);
  entity_4[7-1]='';
  memset(entity_6, 'e', 55-1);
  entity_6[55-1]='';
  entity_4[entity_9] = 'b';
}