void fun()
{
  int entity_2 = 36;
  char entity_4[70] = "";
  entity_4 = NULL;
  memset(entity_4, 'T', 70-1);
  entity_4[70-1]='';
  entity_2 = 99;
  entity_4[entity_2] = 'U';
}