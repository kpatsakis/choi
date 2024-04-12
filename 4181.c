void fun()
{
  int entity_5 = 4;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_1 = 'e';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[71-1]='';
  memset(entity_7, 'Q', entity_5-1);
  entity_7[entity_5-1]='';
  entity_5 = 20;
  strcpy(entity_4, entity_7);
}