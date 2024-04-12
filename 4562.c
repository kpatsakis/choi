void fun()
{
  int entity_2 = 99;
  int entity_9 = 3;
  char* entity_3;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_6 = 's';
  char* entity_8;
  memset(entity_7, 'y', entity_2-1);
  entity_7[entity_2-1]='';
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  strcpy(entity_8, entity_7);
}