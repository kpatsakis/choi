void fun()
{
  int entity_8 = 80;
  char entity_7[34] = "";
  entity_7 = NULL;
  char entity_5[43] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'd', 43-1);
  entity_5[43-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_7, 'p', 34-1);
  entity_7[34-1]='';
  entity_8 = 52;
  strcpy(entity_6, entity_5);
}