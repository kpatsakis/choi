void fun()
{
  int entity_4 = 40;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char entity_1 = 'p';
  char entity_2 = 'J';
  char* entity_6;
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[60-1]='';
  memset(entity_3, 'l', entity_4-1);
  entity_3[entity_4-1]='';
  strcpy(entity_6, entity_3);
}