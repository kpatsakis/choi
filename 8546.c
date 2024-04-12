void fun()
{
  int entity_4 = 59;
  char entity_2[8] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', 8-1);
  entity_2[8-1]='';
  entity_4 = 74;
  entity_2[entity_4] = 'f';
}