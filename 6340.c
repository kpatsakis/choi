void fun()
{
  int entity_1 = 19;
  int entity_5 = 46;
  char entity_4 = 'O';
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(61*sizeof(char));
  entity_7[61-1]='';
  memset(entity_0, 'M', entity_5-1);
  entity_0[entity_5-1]='';
  entity_5 = 43;
  strcpy(entity_7, entity_0);
}