void fun()
{
  int entity_2 = 39;
  entity_2 = 39;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_8;
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[37-1]='';
  entity_8 = (char*)malloc(80*sizeof(char));
  entity_8[80-1]='';
  memset(entity_7, 'm', entity_2-1);
  entity_7[entity_2-1]='';
  strcpy(entity_8, entity_7);
}