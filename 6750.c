void fun()
{
  int entity_8 = 94;
  char entity_4[58] = "";
  entity_4 = NULL;
  char entity_7[66] = "";
  entity_7 = NULL;
  char entity_1[36] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'Q', 36-1);
  entity_1[36-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_4, 'N', 58-1);
  entity_4[58-1]='';
  memset(entity_7, 'f', 66-1);
  entity_7[66-1]='';
  strcpy(entity_0, entity_4);
}