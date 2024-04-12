void fun()
{
  int entity_4 = 74;
  char entity_7[43] = "";
  entity_7 = NULL;
  memset(entity_7, 'd', 43-1);
  entity_7[43-1]='';
  entity_7[entity_4] = 'M';
}