void fun()
{
  int entity_9 = 79;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  memset(entity_3, 'J', entity_9-1);
  entity_3[entity_9-1]='';
  strcpy(entity_1, entity_3);
}