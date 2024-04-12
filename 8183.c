void fun()
{
  int entity_6 = 84;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'm', entity_6-1);
  entity_1[entity_6-1]='';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  entity_6 = 13;
  memcpy(entity_9, entity_1, entity_6*sizeof(char));
}