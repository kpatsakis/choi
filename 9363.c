void fun()
{
  int entity_6 = 20;
  char* entity_0;
  char entity_1[1] = "";
  entity_1 = NULL;
  char* entity_9;
  char* entity_3;
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_1, 'b', 1-1);
  entity_1[1-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  strcpy(entity_9, entity_1);
}