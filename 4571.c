void fun()
{
  int entity_0 = 80;
  int entity_8 = 87;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char entity_1 = 'x';
  memset(entity_5, 's', entity_8-1);
  entity_5[entity_8-1]='';
  entity_5[80] = 'i';
}