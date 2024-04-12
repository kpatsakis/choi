void fun()
{
  int entity_8 = 11;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_9;
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[90-1]='';
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[36-1]='';
  memset(entity_3, 'C', entity_8-1);
  entity_3[entity_8-1]='';
  strcpy(entity_9, entity_3);
}