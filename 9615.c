void fun()
{
  int entity_3 = 52;
  entity_3 = 85;
  char entity_5 = 'J';
  char entity_0[56] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_0, 'D', 56-1);
  entity_0[56-1]='';
  strcpy(entity_8, entity_0);
}