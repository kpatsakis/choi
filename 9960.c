void fun()
{
  int entity_9 = 17;
  char entity_7[7] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_7, 'I', 7-1);
  entity_7[7-1]='';
  entity_9 = 86;
  strcpy(entity_5, entity_7);
}