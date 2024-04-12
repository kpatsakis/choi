void fun()
{
  int entity_8 = 36;
  int entity_2 = 62;
  char entity_6[95] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_3 = 'a';
  char* entity_0;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  memset(entity_6, 'D', 95-1);
  entity_6[95-1]='';
  strcpy(entity_0, entity_6);
}