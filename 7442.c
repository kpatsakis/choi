void fun()
{
  char entity_9[28] = "";
  entity_9 = NULL;
  char* entity_5;
  char* entity_6;
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[8-1]='';
  memset(entity_9, 'p', 28-1);
  entity_9[28-1]='';
  strcpy(entity_6, entity_9);
}