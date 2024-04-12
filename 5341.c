void fun()
{
  int entity_7 = 92;
  int entity_9 = 73;
  int entity_8 = 2;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'G', entity_9-1);
  entity_0[entity_9-1]='';
  entity_3 = (char*)malloc(56*sizeof(char));
  entity_3[56-1]='';
  strcpy(entity_3, entity_0);
}