void fun()
{
  int entity_5 = 28;
  int entity_2 = 26;
  char entity_3[85] = "";
  entity_3 = NULL;
  char entity_6[72] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_3, 'N', 85-1);
  entity_3[85-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_6, 'V', 72-1);
  entity_6[72-1]='';
  entity_5 = 93;
  strcpy(entity_7, entity_6);
}