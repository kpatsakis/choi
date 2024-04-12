void fun()
{
  int entity_5 = 48;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[70] = 'y';
}