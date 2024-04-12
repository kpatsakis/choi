void fun()
{
  int entity_3 = 21;
  char entity_5[71] = "";
  entity_5 = NULL;
  char* entity_8;
  char* entity_9;
  memset(entity_5, 'n', 71-1);
  entity_5[71-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  entity_8 = (char*)malloc(83*sizeof(char));
  entity_8[83-1]='';
  entity_3 = 15;
  strcpy(entity_9, entity_5);
}