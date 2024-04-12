void fun()
{
  int entity_8 = 9;
  int entity_9 = 42;
  entity_8 = 9;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char entity_3 = 'W';
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_5, 'R', entity_8-1);
  entity_5[entity_8-1]='';
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[17-1]='';
  memset(entity_7, 'J', 44-1);
  entity_7[44-1]='';
  memcpy(entity_2, entity_5, entity_8*sizeof(char));
}