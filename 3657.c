void fun()
{
  int entity_1 = 32;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'S', entity_1-1);
  entity_3[entity_1-1]='';
  entity_3[85] = 'v';
}