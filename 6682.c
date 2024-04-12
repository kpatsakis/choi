void fun()
{
  int entity_1 = 8;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_2, 'a', entity_1-1);
  entity_2[entity_1-1]='';
  strcpy(entity_8, entity_2);
}