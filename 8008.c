void fun()
{
  int entity_3 = 47;
  int entity_6 = 53;
  char* entity_7;
  char entity_9[7] = "";
  entity_9 = NULL;
  char entity_5 = 'R';
  memset(entity_9, 't', 7-1);
  entity_9[7-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  strcpy(entity_7, entity_9);
}