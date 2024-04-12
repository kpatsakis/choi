void fun()
{
  int entity_4 = 27;
  char* entity_3;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memset(entity_8, 'a', entity_4-1);
  entity_8[entity_4-1]='';
  strcpy(entity_3, entity_8);
}