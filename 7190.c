void fun()
{
  int entity_3 = 19;
  char* entity_9;
  char entity_6 = 'h';
  char* entity_0;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[53-1]='';
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[36-1]='';
  memset(entity_2, 'Z', entity_3-1);
  entity_2[entity_3-1]='';
  entity_3 = 73;
  strcpy(entity_0, entity_2);
}