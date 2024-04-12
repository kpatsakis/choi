void fun()
{
  char* entity_0;
  char* entity_9;
  char entity_4[6] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(5*sizeof(char));
  entity_2[5-1]='';
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  memset(entity_4, 'v', 6-1);
  entity_4[6-1]='';
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[1-1]='';
  strcpy(entity_2, entity_4);
}