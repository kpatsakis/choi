void fun()
{
  int entity_6 = 64;
  int entity_8 = 5;
  char* entity_7;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'J', entity_6-1);
  entity_5[entity_6-1]='';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  entity_6 = 77;
  strcpy(entity_7, entity_5);
}