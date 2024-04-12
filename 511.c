void fun()
{
  int entity_4 = 15;
  int entity_6 = 13;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_7;
  char* entity_8;
  entity_8 = (char*)malloc(91*sizeof(char));
  entity_8[91-1]='';
  memset(entity_1, 'T', entity_6-1);
  entity_1[entity_6-1]='';
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[86-1]='';
  entity_6 = 30;
  strcpy(entity_8, entity_1);
}