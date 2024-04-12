void fun()
{
  int entity_1 = 14;
  int entity_0 = 73;
  int entity_5 = 26;
  char entity_6[43] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_3;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_6, 'Q', 43-1);
  entity_6[43-1]='';
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[25-1]='';
  strcpy(entity_3, entity_6);
}