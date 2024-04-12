void fun()
{
  int entity_3 = 76;
  int entity_0 = 30;
  char* entity_8;
  char entity_4 = 'i';
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_9, 'Q', entity_3-1);
  entity_9[entity_3-1]='';
  entity_3 = 9;
  strcpy(entity_8, entity_9);
}