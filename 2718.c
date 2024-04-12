void fun()
{
  char entity_4[56] = "";
  entity_4 = NULL;
  char entity_8[8] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_6 = 'e';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  memset(entity_4, 'P', 56-1);
  entity_4[56-1]='';
  memset(entity_8, 'P', 8-1);
  entity_8[8-1]='';
  strcpy(entity_3, entity_4);
}