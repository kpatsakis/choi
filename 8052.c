void fun()
{
  int entity_6 = 70;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'p', entity_6-1);
  entity_1[entity_6-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  memcpy(entity_9, entity_1, entity_6*sizeof(char));
}