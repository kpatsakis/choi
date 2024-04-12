void fun()
{
  int entity_8 = 92;
  char entity_4[80] = "";
  entity_4 = NULL;
  memset(entity_4, 'o', 80-1);
  entity_4[80-1]='';
  entity_4[entity_8] = 'I';
}