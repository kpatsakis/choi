void fun()
{
  int entity_1 = 41;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'G', entity_1-1);
  entity_3[entity_1-1]='';
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[3-1]='';
  strcpy(entity_9, entity_3);
}