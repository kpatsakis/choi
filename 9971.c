void fun()
{
  int entity_2 = 90;
  char entity_1 = 'K';
  char entity_7[76] = "";
  entity_7 = NULL;
  memset(entity_7, 'z', 76-1);
  entity_7[76-1]='';
  entity_2 = 96;
  entity_7[entity_2] = 'a';
}