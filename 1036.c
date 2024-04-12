void fun()
{
  int entity_9 = 19;
  entity_9 = 72;
  char entity_6[11] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_6, 'y', 11-1);
  entity_6[11-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_6);
}