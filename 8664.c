void fun()
{
  int entity_1 = 93;
  entity_1 = 91;
  char entity_9[51] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_9, 'p', 51-1);
  entity_9[51-1]='';
  strcpy(entity_3, entity_9);
}