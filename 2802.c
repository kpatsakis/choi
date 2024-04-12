void fun()
{
  int entity_2 = 59;
  char entity_7[76] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', 76-1);
  entity_7[76-1]='';
  entity_7[entity_2] = 'I';
}