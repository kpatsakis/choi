void fun()
{
  int entity_4 = 43;
  entity_4 = 49;
  char entity_1[87] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', 87-1);
  entity_1[87-1]='';
  entity_1[entity_4] = 'H';
}