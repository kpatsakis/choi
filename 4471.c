void fun()
{
  int entity_0 = 97;
  char* entity_7;
  char entity_6[31] = "";
  entity_6 = NULL;
  memset(entity_6, 'Y', 31-1);
  entity_6[31-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  strcpy(entity_7, entity_6);
}