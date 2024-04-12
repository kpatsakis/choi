void fun()
{
  int entity_4 = 11;
  char* entity_9;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_2;
  char entity_1[2] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  memset(entity_3, 'y', entity_4-1);
  entity_3[entity_4-1]='';
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  memset(entity_1, 'E', 2-1);
  entity_1[2-1]='';
  strcpy(entity_2, entity_3);
}