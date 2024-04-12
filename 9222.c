void fun()
{
  int entity_8 = 65;
  char entity_1[46] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_2;
  char entity_5 = 'O';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_1, 'q', 46-1);
  entity_1[46-1]='';
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  strcpy(entity_6, entity_1);
}