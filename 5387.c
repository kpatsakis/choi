void fun()
{
  int entity_9 = 21;
  char* entity_1;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  memset(entity_6, 'p', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 77;
  strcpy(entity_1, entity_6);
}