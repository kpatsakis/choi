void fun()
{
  int entity_0 = 47;
  int entity_8 = 29;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_6;
  char* entity_9;
  entity_9 = (char*)malloc(28*sizeof(char));
  entity_9[28-1]='';
  memset(entity_3, 'N', entity_8-1);
  entity_3[entity_8-1]='';
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  strcpy(entity_9, entity_3);
}