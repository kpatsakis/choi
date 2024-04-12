void fun()
{
  int entity_4 = 50;
  char* entity_5;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'F', entity_4-1);
  entity_7[entity_4-1]='';
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  entity_4 = 2;
  strcpy(entity_5, entity_7);
}