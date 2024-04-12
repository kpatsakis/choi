void fun()
{
  int entity_1 = 47;
  char entity_9[37] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  memset(entity_6, 'l', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_9, 'R', 37-1);
  entity_9[37-1]='';
  memcpy(entity_5, entity_6, entity_1*sizeof(char));
}