void fun()
{
  char entity_6[19] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_9;
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[15-1]='';
  memset(entity_6, 'b', 19-1);
  entity_6[19-1]='';
  strcpy(entity_2, entity_6);
}