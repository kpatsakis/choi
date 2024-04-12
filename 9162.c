void fun()
{
  int entity_3 = 99;
  char entity_6[83] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_6, 'S', 83-1);
  entity_6[83-1]='';
  entity_3 = 38;
  strcpy(entity_7, entity_6);
}