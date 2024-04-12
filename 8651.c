void fun()
{
  int entity_4 = 41;
  int entity_0 = 63;
  char entity_3 = 'Z';
  char* entity_9;
  char* entity_1;
  char entity_5[6] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_5, 'u', 6-1);
  entity_5[6-1]='';
  entity_4 = 29;
  strcpy(entity_1, entity_5);
}