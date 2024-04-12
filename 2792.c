void fun()
{
  int entity_7 = 19;
  entity_7 = 19;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_9;
  char* entity_3;
  char* entity_4;
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  memset(entity_8, 'h', entity_7-1);
  entity_8[entity_7-1]='';
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[10-1]='';
  strcpy(entity_3, entity_8);
}