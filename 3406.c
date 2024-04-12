void fun()
{
  int entity_9 = 32;
  entity_9 = 32;
  char* entity_1;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'o', entity_9-1);
  entity_5[entity_9-1]='';
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[85-1]='';
  strcpy(entity_1, entity_5);
}