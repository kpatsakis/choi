void fun()
{
  int entity_4 = 7;
  char entity_5[68] = "";
  entity_5 = NULL;
  memset(entity_5, 'D', 68-1);
  entity_5[68-1]='';
  entity_5[entity_4] = 'I';
}