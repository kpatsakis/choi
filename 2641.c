void fun()
{
  int entity_8 = 49;
  char entity_3[94] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'Q', 94-1);
  entity_3[94-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  strcpy(entity_6, entity_3);
}