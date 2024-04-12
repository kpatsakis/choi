void fun()
{
  int entity_3 = 73;
  char entity_4[91] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', 91-1);
  entity_4[91-1]='';
  entity_4[entity_3] = 'z';
}