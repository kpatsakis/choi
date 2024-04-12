void fun()
{
  int entity_8 = 9;
  int entity_4 = 17;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_7;
  memset(entity_5, 'n', entity_4-1);
  entity_5[entity_4-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[51-1]='';
  strcpy(entity_7, entity_5);
}