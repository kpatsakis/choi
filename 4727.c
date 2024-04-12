void fun()
{
  int entity_8 = 41;
  char* entity_4;
  char entity_6[9] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[73-1]='';
  memset(entity_6, 'm', 9-1);
  entity_6[9-1]='';
  strcpy(entity_4, entity_6);
}