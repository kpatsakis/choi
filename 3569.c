void fun()
{
  int entity_3 = 15;
  char entity_8 = 'u';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_5;
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  memset(entity_4, 'J', entity_3-1);
  entity_4[entity_3-1]='';
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[52-1]='';
  strcpy(entity_6, entity_4);
}