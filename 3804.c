void fun()
{
  int entity_6 = 5;
  int entity_1 = 10;
  entity_6 = 5;
  char entity_9[74] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_9, 'I', 74-1);
  entity_9[74-1]='';
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[60-1]='';
  memset(entity_0, 'q', entity_6-1);
  entity_0[entity_6-1]='';
  entity_7 = (char*)malloc(75*sizeof(char));
  entity_7[75-1]='';
  strcpy(entity_3, entity_0);
}