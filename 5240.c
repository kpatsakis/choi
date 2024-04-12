void fun()
{
  int entity_2 = 9;
  char entity_9 = 'H';
  char* entity_5;
  char* entity_8;
  char entity_1 = 'p';
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_7, 'a', 15-1);
  entity_7[15-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[10-1]='';
  strcpy(entity_5, entity_7);
}