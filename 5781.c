void fun()
{
  int entity_4 = 5;
  entity_4 = 5;
  char* entity_8;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  memset(entity_5, 'J', entity_4-1);
  entity_5[entity_4-1]='';
  strcpy(entity_8, entity_5);
}