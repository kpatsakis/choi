void fun()
{
  char* entity_9;
  char* entity_5;
  char entity_4[79] = "";
  entity_4 = NULL;
  char entity_1[47] = "";
  entity_1 = NULL;
  memset(entity_4, 'a', 79-1);
  entity_4[79-1]='';
  memset(entity_1, 'L', 47-1);
  entity_1[47-1]='';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[42-1]='';
  strcpy(entity_5, entity_4);
}