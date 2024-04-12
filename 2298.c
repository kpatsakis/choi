void fun()
{
  char entity_9[19] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_0;
  char* entity_4;
  memset(entity_9, 'I', 19-1);
  entity_9[19-1]='';
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[45-1]='';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  entity_2 = (char*)malloc(56*sizeof(char));
  entity_2[56-1]='';
  strcpy(entity_0, entity_9);
}