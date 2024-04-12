void fun()
{
  int entity_4 = 34;
  int entity_6 = 10;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  memset(entity_5, 'n', entity_6-1);
  entity_5[entity_6-1]='';
  memcpy(entity_9, entity_5, entity_6*sizeof(char));
}