void fun()
{
  int entity_1 = 71;
  entity_1 = 71;
  char* entity_4;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  memset(entity_7, 'W', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_3, entity_7);
}