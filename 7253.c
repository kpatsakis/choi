void fun()
{
  int entity_3 = 82;
  entity_3 = 82;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  memset(entity_8, 'v', entity_3-1);
  entity_8[entity_3-1]='';
  strcpy(entity_4, entity_8);
}