void fun()
{
  int entity_9 = 36;
  char entity_7[36] = "";
  entity_7 = NULL;
  char entity_4[61] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'f', 61-1);
  entity_4[61-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_7, 'I', 36-1);
  entity_7[36-1]='';
  strcpy(entity_5, entity_4);
}