void fun()
{
  int entity_3 = 54;
  entity_3 = 30;
  char entity_5 = 't';
  char* entity_4;
  char entity_9[41] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[79-1]='';
  memset(entity_9, 'p', 41-1);
  entity_9[41-1]='';
  strcpy(entity_4, entity_9);
}