void fun()
{
  int entity_1 = 9;
  char* entity_2;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(61*sizeof(char));
  entity_2[61-1]='';
  memset(entity_7, 'x', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_2, entity_7);
}