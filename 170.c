void fun()
{
  int entity_2 = 72;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'i', entity_2-1);
  entity_1[entity_2-1]='';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[90-1]='';
  strcpy(entity_9, entity_1);
}