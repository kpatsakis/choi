void fun()
{
  int entity_0 = 23;
  int entity_7 = 15;
  char entity_1[81] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_9;
  char entity_2[11] = "";
  entity_2 = NULL;
  memset(entity_2, 'o', 11-1);
  entity_2[11-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_1, 'A', 81-1);
  entity_1[81-1]='';
  entity_4 = (char*)malloc(79*sizeof(char));
  entity_4[79-1]='';
  strcpy(entity_9, entity_2);
}