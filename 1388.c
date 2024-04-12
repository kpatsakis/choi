void fun()
{
  int entity_9 = 9;
  char entity_5[5] = "";
  entity_5 = NULL;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_5, 'l', 5-1);
  entity_5[5-1]='';
  memset(entity_7, 'R', 96-1);
  entity_7[96-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_9 = 48;
  strcpy(entity_3, entity_5);
}