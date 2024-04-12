void fun()
{
  int entity_9 = 91;
  char entity_6 = 'D';
  char* entity_5;
  char* entity_3;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', entity_9-1);
  entity_1[entity_9-1]='';
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[36-1]='';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  entity_9 = 91;
  strcpy(entity_5, entity_1);
}