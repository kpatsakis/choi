void fun()
{
  char entity_3[95] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_9[77] = "";
  entity_9 = NULL;
  memset(entity_9, 'X', 77-1);
  entity_9[77-1]='';
  memset(entity_3, 'e', 95-1);
  entity_3[95-1]='';
  entity_0 = (char*)malloc(83*sizeof(char));
  entity_0[83-1]='';
  strcpy(entity_0, entity_3);
}