void fun()
{
  int entity_4 = 75;
  char* entity_7;
  char entity_6[17] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_6, 'Y', 17-1);
  entity_6[17-1]='';
  strcpy(entity_7, entity_6);
}