void fun()
{
  int entity_1 = 54;
  int entity_7 = 9;
  char* entity_3;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'Y', entity_7-1);
  entity_5[entity_7-1]='';
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  strcpy(entity_3, entity_5);
}