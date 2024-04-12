void fun()
{
  int entity_7 = 15;
  int entity_8 = 84;
  entity_8 = 82;
  char entity_0[83] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_3[61] = "";
  entity_3 = NULL;
  memset(entity_0, 'z', 83-1);
  entity_0[83-1]='';
  memset(entity_3, 'P', 61-1);
  entity_3[61-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  strcpy(entity_4, entity_3);
}