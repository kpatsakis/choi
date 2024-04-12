void fun()
{
  int entity_4 = 74;
  entity_4 = 75;
  char* entity_6;
  char entity_7[40] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_7, 't', 40-1);
  entity_7[40-1]='';
  strcpy(entity_6, entity_7);
}