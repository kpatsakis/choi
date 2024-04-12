void fun()
{
  int entity_7 = 28;
  int entity_0 = 79;
  entity_7 = 72;
  char entity_5[52] = "";
  entity_5 = NULL;
  char entity_1 = 'w';
  char* entity_4;
  char entity_8[85] = "";
  entity_8 = NULL;
  memset(entity_8, 'U', 85-1);
  entity_8[85-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_5, 'v', 52-1);
  entity_5[52-1]='';
  strcpy(entity_4, entity_5);
}