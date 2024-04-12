void fun()
{
  int entity_9 = 56;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_5;
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memset(entity_0, 'I', entity_9-1);
  entity_0[entity_9-1]='';
  entity_9 = 81;
  strcpy(entity_5, entity_0);
}