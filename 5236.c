void fun()
{
  int entity_0 = 20;
  char* entity_6;
  char entity_7[89] = "";
  entity_7 = NULL;
  memset(entity_7, 'D', 89-1);
  entity_7[89-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  strcpy(entity_6, entity_7);
}