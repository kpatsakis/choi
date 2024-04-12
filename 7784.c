void fun()
{
  int entity_3 = 95;
  char* entity_5;
  char* entity_7;
  char entity_6 = 'h';
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_1 = 'C';
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[91-1]='';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  memset(entity_8, 'W', entity_3-1);
  entity_8[entity_3-1]='';
  strcpy(entity_7, entity_8);
}