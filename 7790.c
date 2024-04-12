void fun()
{
  int entity_9 = 53;
  char entity_8 = 'D';
  char entity_4[86] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memset(entity_4, 'D', 86-1);
  entity_4[86-1]='';
  entity_4[entity_9] = 'p';
}