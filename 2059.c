void fun()
{
  int entity_1 = 15;
  char* entity_3;
  char* entity_9;
  char* entity_7;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'L', entity_1-1);
  entity_0[entity_1-1]='';
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  entity_9 = (char*)malloc(33*sizeof(char));
  entity_9[33-1]='';
  entity_3 = (char*)malloc(63*sizeof(char));
  entity_3[63-1]='';
  strcpy(entity_7, entity_0);
}