void fun()
{
  int entity_1 = 45;
  int entity_7 = 15;
  char entity_4[56] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'w', 56-1);
  entity_4[56-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_1 = 21;
  strcpy(entity_0, entity_4);
}