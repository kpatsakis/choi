void fun()
{
  int entity_0 = 35;
  char entity_6[18] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_6, 'V', 18-1);
  entity_6[18-1]='';
  entity_0 = 65;
  strcpy(entity_7, entity_6);
}