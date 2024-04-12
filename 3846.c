void fun()
{
  int entity_5 = 90;
  entity_5 = 90;
  char* entity_6;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  entity_6 = (char*)malloc(51*sizeof(char));
  entity_6[51-1]='';
  memset(entity_1, 'h', entity_5-1);
  entity_1[entity_5-1]='';
  strcpy(entity_6, entity_1);
}