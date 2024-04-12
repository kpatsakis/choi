void fun()
{
  int entity_6 = 19;
  char entity_5 = 'x';
  char entity_4[17] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'V', 17-1);
  entity_4[17-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_6 = 32;
  strcpy(entity_7, entity_4);
}