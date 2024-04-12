void fun()
{
  int entity_9 = 97;
  int entity_0 = 49;
  char entity_5 = 'G';
  char* entity_6;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[44-1]='';
  memset(entity_7, 'F', entity_9-1);
  entity_7[entity_9-1]='';
  entity_9 = 33;
  strcpy(entity_6, entity_7);
}