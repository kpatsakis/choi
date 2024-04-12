void fun()
{
  int entity_1 = 89;
  char entity_6[19] = "";
  entity_6 = NULL;
  memset(entity_6, 'o', 19-1);
  entity_6[19-1]='';
  entity_6[entity_1] = 'c';
}