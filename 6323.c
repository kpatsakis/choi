void fun()
{
  char* entity_1;
  char* entity_9;
  char entity_4[83] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[57-1]='';
  memset(entity_4, 'o', 83-1);
  entity_4[83-1]='';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  strcpy(entity_9, entity_4);
}