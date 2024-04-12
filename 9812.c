void fun()
{
  int entity_7 = 65;
  char* entity_9;
  char entity_8[43] = "";
  entity_8 = NULL;
  char entity_3[23] = "";
  entity_3 = NULL;
  memset(entity_8, 'B', 43-1);
  entity_8[43-1]='';
  memset(entity_3, 'f', 23-1);
  entity_3[23-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  strcpy(entity_9, entity_3);
}