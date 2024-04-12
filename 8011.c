void fun()
{
  int entity_4 = 29;
  char entity_3[41] = "";
  entity_3 = NULL;
  char entity_5 = 'U';
  char* entity_0;
  char entity_8 = 'w';
  char* entity_6;
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_3, 'O', 41-1);
  entity_3[41-1]='';
  entity_4 = 81;
  strcpy(entity_0, entity_3);
}