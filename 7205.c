void fun()
{
  int entity_9 = 16;
  int entity_5 = 92;
  char* entity_8;
  char* entity_0;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'd', entity_9-1);
  entity_1[entity_9-1]='';
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[22-1]='';
  strcpy(entity_8, entity_1);
}