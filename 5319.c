void fun()
{
  int entity_2 = 87;
  entity_2 = 82;
  char* entity_6;
  char entity_7[20] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_1[72] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  entity_0 = (char*)malloc(28*sizeof(char));
  entity_0[28-1]='';
  memset(entity_7, 'X', 20-1);
  entity_7[20-1]='';
  memset(entity_1, 'D', 72-1);
  entity_1[72-1]='';
  strcpy(entity_9, entity_1);
}