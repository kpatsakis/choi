void fun()
{
  int entity_5 = 63;
  int entity_9 = 24;
  char* entity_8;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', entity_5-1);
  entity_3[entity_5-1]='';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  strcpy(entity_8, entity_3);
}