void fun()
{
  int entity_0 = 97;
  entity_0 = 97;
  char entity_6 = 'h';
  char* entity_3;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'Q', entity_0-1);
  entity_4[entity_0-1]='';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  strcpy(entity_3, entity_4);
}