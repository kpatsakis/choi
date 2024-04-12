void fun()
{
  int entity_0 = 14;
  entity_0 = 73;
  char* entity_5;
  char entity_9[24] = "";
  entity_9 = NULL;
  char entity_3 = 'D';
  memset(entity_9, 'x', 24-1);
  entity_9[24-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memcpy(entity_5, entity_9, 24*sizeof(char));
}