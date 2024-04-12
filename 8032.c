void fun()
{
  int entity_8 = 6;
  int entity_2 = 37;
  char entity_6[25] = "";
  entity_6 = NULL;
  char entity_9[21] = "";
  entity_9 = NULL;
  char entity_1[79] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_6, 'L', 25-1);
  entity_6[25-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_1, 'z', 79-1);
  entity_1[79-1]='';
  memset(entity_9, 'h', 21-1);
  entity_9[21-1]='';
  strcpy(entity_5, entity_9);
}