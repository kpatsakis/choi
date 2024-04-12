void fun()
{
  int entity_8 = 73;
  int entity_3 = 10;
  char* entity_6;
  char entity_4[29] = "";
  entity_4 = NULL;
  char entity_1 = 'l';
  char entity_7[29] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_4, 'd', 29-1);
  entity_4[29-1]='';
  memset(entity_7, 'B', 29-1);
  entity_7[29-1]='';
  strcpy(entity_6, entity_7);
}