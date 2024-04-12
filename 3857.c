void fun()
{
  int entity_1 = 18;
  char* entity_7;
  char* entity_8;
  char entity_3[39] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[60-1]='';
  memset(entity_3, 'e', 39-1);
  entity_3[39-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_3);
}