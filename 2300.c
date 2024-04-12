void fun()
{
  int entity_1 = 22;
  int entity_8 = 89;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char entity_2 = 't';
  char* entity_9;
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[90-1]='';
  memset(entity_7, 'N', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_9, entity_7);
}