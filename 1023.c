void fun()
{
  int entity_6 = 56;
  int entity_3 = 53;
  entity_6 = 56;
  char* entity_9;
  char* entity_7;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'a', entity_6-1);
  entity_4[entity_6-1]='';
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[39-1]='';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  strcpy(entity_7, entity_4);
}