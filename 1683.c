void fun()
{
  int entity_4 = 10;
  char entity_1[48] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', 48-1);
  entity_1[48-1]='';
  entity_4 = 46;
  entity_1[entity_4] = 'j';
}