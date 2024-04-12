void fun()
{
  int entity_2 = 59;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char entity_5 = 'J';
  char* entity_6;
  memset(entity_4, 'u', entity_2-1);
  entity_4[entity_2-1]='';
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  strcpy(entity_6, entity_4);
}