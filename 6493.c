void fun()
{
  int entity_9 = 39;
  entity_9 = 74;
  char entity_6[60] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_6, 'q', 60-1);
  entity_6[60-1]='';
  strcpy(entity_3, entity_6);
}