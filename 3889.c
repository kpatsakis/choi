void fun()
{
  int entity_5 = 20;
  entity_5 = 28;
  char entity_8[59] = "";
  entity_8 = NULL;
  char* entity_7;
  char entity_2 = 'm';
  memset(entity_8, 'J', 59-1);
  entity_8[59-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  strcpy(entity_7, entity_8);
}