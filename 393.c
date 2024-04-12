void fun()
{
  int entity_7 = 80;
  int entity_5 = 93;
  char* entity_1;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  memset(entity_2, 'x', entity_5-1);
  entity_2[entity_5-1]='';
  strcpy(entity_1, entity_2);
}