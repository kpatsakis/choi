void fun()
{
  char* entity_8;
  char entity_5[21] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_9[93] = "";
  entity_9 = NULL;
  memset(entity_5, 'S', 21-1);
  entity_5[21-1]='';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memset(entity_9, 'H', 93-1);
  entity_9[93-1]='';
  strcpy(entity_8, entity_5);
}