void fun()
{
  int entity_3 = 89;
  int entity_1 = 73;
  char entity_4[27] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', 27-1);
  entity_4[27-1]='';
  entity_4[entity_1] = 'Z';
}