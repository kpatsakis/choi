void fun()
{
  int entity_9 = 47;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[66-1]='';
  memset(entity_2, 'X', entity_9-1);
  entity_2[entity_9-1]='';
  entity_9 = 81;
  strcpy(entity_4, entity_2);
}