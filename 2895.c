void fun()
{
  int entity_5 = 79;
  int entity_4 = 9;
  char* entity_9;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[35-1]='';
  memset(entity_6, 'd', entity_5-1);
  entity_6[entity_5-1]='';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  strcpy(entity_8, entity_6);
}