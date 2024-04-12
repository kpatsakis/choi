void fun()
{
  int entity_7 = 34;
  char entity_4[62] = "";
  entity_4 = NULL;
  memset(entity_4, 'f', 62-1);
  entity_4[62-1]='';
  entity_7 = 50;
  entity_4[entity_7] = 'P';
}