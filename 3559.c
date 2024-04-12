void fun()
{
  int entity_1 = 64;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_2 = 'e';
  char* entity_6;
  memset(entity_4, 'D', entity_1-1);
  entity_4[entity_1-1]='';
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[89-1]='';
  entity_5 = (char*)malloc(40*sizeof(char));
  entity_5[40-1]='';
  strcpy(entity_5, entity_4);
}