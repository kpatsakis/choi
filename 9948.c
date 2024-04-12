void fun()
{
  int entity_5 = 69;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'a', entity_5-1);
  entity_7[entity_5-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  entity_5 = 75;
  strcpy(entity_8, entity_7);
}