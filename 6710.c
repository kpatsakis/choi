void fun()
{
  int entity_8 = 47;
  char* entity_5;
  char entity_4[87] = "";
  entity_4 = NULL;
  char entity_7[34] = "";
  entity_7 = NULL;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_4, 'i', 87-1);
  entity_4[87-1]='';
  memset(entity_7, 'E', 34-1);
  entity_7[34-1]='';
  memset(entity_6, 'o', entity_8-1);
  entity_6[entity_8-1]='';
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[52-1]='';
  strcpy(entity_5, entity_6);
}