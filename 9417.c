void fun()
{
  int entity_7 = 19;
  char entity_3[78] = "";
  entity_3 = NULL;
  memset(entity_3, 'P', 78-1);
  entity_3[78-1]='';
  entity_3[entity_7] = 'Z';
}