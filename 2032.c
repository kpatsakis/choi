void fun()
{
  int entity_7 = 3;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'I', entity_7-1);
  entity_8[entity_7-1]='';
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  strcpy(entity_6, entity_8);
}