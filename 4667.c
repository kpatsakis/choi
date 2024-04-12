void fun()
{
  int entity_5 = 20;
  char entity_6[38] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_6, 'e', 38-1);
  entity_6[38-1]='';
  strcpy(entity_7, entity_6);
}