void fun()
{
  int entity_8 = 40;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_2[85] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_7[29] = "";
  entity_7 = NULL;
  memset(entity_7, 'C', 29-1);
  entity_7[29-1]='';
  memset(entity_6, 'q', entity_8-1);
  entity_6[entity_8-1]='';
  memset(entity_2, 'z', 85-1);
  entity_2[85-1]='';
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[17-1]='';
  strcpy(entity_4, entity_6);
}