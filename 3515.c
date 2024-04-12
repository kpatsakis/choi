void fun()
{
  int entity_8 = 34;
  char entity_2[5] = "";
  entity_2 = NULL;
  memset(entity_2, 'D', 5-1);
  entity_2[5-1]='';
  entity_8 = 68;
  entity_2[entity_8] = 'q';
}