void fun()
{
  int entity_1 = 89;
  char entity_8[44] = "";
  entity_8 = NULL;
  char entity_5[57] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_8, 'c', 44-1);
  entity_8[44-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_5, 't', 57-1);
  entity_5[57-1]='';
  strcpy(entity_9, entity_5);
}