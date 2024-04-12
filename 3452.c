void fun()
{
  int entity_7 = 48;
  char* entity_2;
  char entity_4[34] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', 34-1);
  entity_4[34-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  entity_7 = 17;
  strcpy(entity_2, entity_4);
}