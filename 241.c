void fun()
{
  int entity_8 = 48;
  char entity_7 = 'O';
  char* entity_3;
  char* entity_0;
  char entity_1[56] = "";
  entity_1 = NULL;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[8-1]='';
  memset(entity_1, 'z', 56-1);
  entity_1[56-1]='';
  memset(entity_9, 'q', entity_8-1);
  entity_9[entity_8-1]='';
  strcpy(entity_0, entity_9);
}