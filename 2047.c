void fun()
{
  int entity_1 = 29;
  char entity_4[87] = "";
  entity_4 = NULL;
  memset(entity_4, 'r', 87-1);
  entity_4[87-1]='';
  entity_1 = 62;
  entity_4[entity_1] = 'C';
}