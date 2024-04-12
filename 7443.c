void fun()
{
  int entity_9 = 51;
  int entity_2 = 30;
  int entity_8 = 63;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_1[47] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[8-1]='';
  memset(entity_7, 'p', entity_2-1);
  entity_7[entity_2-1]='';
  memset(entity_1, 'x', 47-1);
  entity_1[47-1]='';
  strcpy(entity_5, entity_7);
}