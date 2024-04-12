void fun()
{
  int entity_3 = 43;
  char entity_6 = 'c';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'e', entity_3-1);
  entity_4[entity_3-1]='';
  entity_3 = 55;
  entity_4[47] = 'b';
}