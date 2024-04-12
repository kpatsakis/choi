void fun()
{
  int entity_6 = 95;
  int entity_4 = 20;
  char* entity_0;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_8[34] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', 34-1);
  entity_8[34-1]='';
  entity_0 = (char*)malloc(68*sizeof(char));
  entity_0[68-1]='';
  memset(entity_9, 'B', entity_6-1);
  entity_9[entity_6-1]='';
  entity_6 = 77;
  strcpy(entity_0, entity_9);
}