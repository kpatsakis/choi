void fun()
{
  int entity_6 = 97;
  char entity_1[12] = "";
  entity_1 = NULL;
  memset(entity_1, 'G', 12-1);
  entity_1[12-1]='';
  entity_1[entity_6] = 'T';
}