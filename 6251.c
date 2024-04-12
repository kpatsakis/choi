void fun()
{
  int entity_4 = 16;
  entity_4 = 57;
  char entity_7 = 'f';
  char entity_1[55] = "";
  entity_1 = NULL;
  memset(entity_1, 'z', 55-1);
  entity_1[55-1]='';
  entity_1[entity_4] = 'V';
}