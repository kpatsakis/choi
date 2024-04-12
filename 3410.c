void fun()
{
  int entity_3 = 46;
  int entity_4 = 85;
  char entity_7[82] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', 82-1);
  entity_7[82-1]='';
  entity_7[entity_4] = 'o';
}