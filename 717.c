void fun()
{
  int entity_1 = 94;
  char entity_2[88] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_0;
  char entity_9[34] = "";
  entity_9 = NULL;
  memset(entity_2, 'y', 88-1);
  entity_2[88-1]='';
  entity_5 = (char*)malloc(95*sizeof(char));
  entity_5[95-1]='';
  memset(entity_9, 'Y', 34-1);
  entity_9[34-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_1 = 33;
  strcpy(entity_0, entity_9);
}