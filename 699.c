void fun()
{
  int entity_5 = 73;
  char entity_7 = 'j';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  memset(entity_1, 'D', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_9, entity_1, entity_5*sizeof(char));
}