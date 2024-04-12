void fun()
{
  int entity_1 = 95;
  int entity_6 = 39;
  int entity_2 = 2;
  entity_6 = 66;
  char entity_5[1] = "";
  entity_5 = NULL;
  char entity_9[47] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'z', 47-1);
  entity_9[47-1]='';
  memset(entity_5, 'T', 1-1);
  entity_5[1-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  strcpy(entity_0, entity_9);
}