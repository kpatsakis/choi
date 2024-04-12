void fun()
{
  int entity_3 = 61;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'z', entity_3-1);
  entity_7[entity_3-1]='';
  entity_7[67] = 'l';
}