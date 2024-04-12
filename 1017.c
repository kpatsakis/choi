void fun()
{
  int entity_9 = 53;
  entity_9 = 22;
  char entity_5[2] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_6 = 'N';
  memset(entity_5, 'W', 2-1);
  entity_5[2-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  strcpy(entity_7, entity_5);
}