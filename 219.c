void fun()
{
  char* entity_9;
  char* entity_2;
  char entity_8[5] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[29-1]='';
  memset(entity_8, 'x', 5-1);
  entity_8[5-1]='';
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[91-1]='';
  strcpy(entity_2, entity_8);
}