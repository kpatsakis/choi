void fun()
{
  int entity_3 = 68;
  char* entity_8;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', entity_3-1);
  entity_6[entity_3-1]='';
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[28-1]='';
  strcpy(entity_8, entity_6);
}