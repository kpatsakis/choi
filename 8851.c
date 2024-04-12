void fun()
{
  int entity_5 = 76;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_0 = 'l';
  char entity_2[13] = "";
  entity_2 = NULL;
  memset(entity_2, 'u', 13-1);
  entity_2[13-1]='';
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memset(entity_4, 'R', entity_5-1);
  entity_4[entity_5-1]='';
  entity_5 = 87;
  strcpy(entity_8, entity_4);
}