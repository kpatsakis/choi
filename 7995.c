void fun()
{
  int entity_4 = 53;
  int entity_0 = 63;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_2 = 'Y';
  char* entity_3;
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[51-1]='';
  memset(entity_8, 'v', entity_4-1);
  entity_8[entity_4-1]='';
  strcpy(entity_3, entity_8);
}