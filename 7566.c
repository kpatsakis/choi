void fun()
{
  int entity_2 = 48;
  char entity_6[47] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_5[24] = "";
  entity_5 = NULL;
  memset(entity_5, 'U', 24-1);
  entity_5[24-1]='';
  memset(entity_6, 'i', 47-1);
  entity_6[47-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  entity_2 = 66;
  strcpy(entity_9, entity_6);
}