void fun()
{
  int entity_6 = 41;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[7-1]='';
  memset(entity_7, 't', entity_6-1);
  entity_7[entity_6-1]='';
  memcpy(entity_9, entity_7, entity_6*sizeof(char));
}