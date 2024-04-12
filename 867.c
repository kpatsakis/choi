void fun()
{
  int entity_2 = 83;
  char* entity_0;
  char entity_5[32] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_0 = (char*)malloc(34*sizeof(char));
  entity_0[34-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_5, 'L', 32-1);
  entity_5[32-1]='';
  strcpy(entity_9, entity_5);
}