void fun()
{
  int entity_7 = 26;
  char* entity_2;
  char entity_0[76] = "";
  entity_0 = NULL;
  char* entity_4;
  char* entity_5;
  memset(entity_0, 'Z', 76-1);
  entity_0[76-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  entity_7 = 78;
  strcpy(entity_5, entity_0);
}