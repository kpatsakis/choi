void fun()
{
  int entity_2 = 59;
  int entity_8 = 66;
  char entity_7 = 'B';
  char entity_9 = 'N';
  char entity_6[34] = "";
  entity_6 = NULL;
  memset(entity_6, 'G', 34-1);
  entity_6[34-1]='';
  entity_6[entity_2] = 'w';
}