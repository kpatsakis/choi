void fun()
{
  int entity_2 = 26;
  entity_2 = 26;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_4[96] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  memset(entity_6, 'e', entity_2-1);
  entity_6[entity_2-1]='';
  memset(entity_4, 'B', 96-1);
  entity_4[96-1]='';
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  strcpy(entity_5, entity_6);
}