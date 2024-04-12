void fun()
{
  int entity_1 = 6;
  char* entity_2;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_8[80] = "";
  entity_8 = NULL;
  char entity_9[39] = "";
  entity_9 = NULL;
  memset(entity_8, 'c', 80-1);
  entity_8[80-1]='';
  memset(entity_9, 'N', 39-1);
  entity_9[39-1]='';
  memset(entity_6, 'z', entity_1-1);
  entity_6[entity_1-1]='';
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  entity_1 = 79;
  strcpy(entity_2, entity_6);
}