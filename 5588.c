void fun()
{
  int entity_6 = 51;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'e', entity_6-1);
  entity_8[entity_6-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  strcpy(entity_3, entity_8);
}