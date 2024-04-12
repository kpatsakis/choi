void fun()
{
  int entity_9 = 7;
  char entity_3[70] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', 70-1);
  entity_3[70-1]='';
  entity_3[entity_9] = 'Z';
}