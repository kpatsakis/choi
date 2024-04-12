void fun()
{
  int entity_9 = 17;
  int entity_4 = 43;
  char entity_6 = 'l';
  char entity_8[85] = "";
  entity_8 = NULL;
  memset(entity_8, 'O', 85-1);
  entity_8[85-1]='';
  entity_8[entity_9] = 'D';
}