void fun()
{
  int entity_0 = 22;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'w', entity_0-1);
  entity_8[entity_0-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  strcpy(entity_3, entity_8);
}