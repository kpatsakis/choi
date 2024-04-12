void fun()
{
  int entity_5 = 39;
  int entity_2 = 49;
  char entity_6[92] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 92-1);
  entity_6[92-1]='';
  entity_6[entity_5] = 'l';
}