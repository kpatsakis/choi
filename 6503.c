void fun()
{
  int entity_7 = 75;
  int entity_5 = 76;
  char entity_0 = 'S';
  char* entity_8;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', entity_5-1);
  entity_4[entity_5-1]='';
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[18-1]='';
  strcpy(entity_8, entity_4);
}