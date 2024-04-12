void fun()
{
  int entity_5 = 56;
  int entity_6 = 64;
  entity_6 = 64;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'N', entity_6-1);
  entity_8[entity_6-1]='';
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[87-1]='';
  strcpy(entity_3, entity_8);
}