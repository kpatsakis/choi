void fun()
{
  int entity_0 = 93;
  entity_0 = 93;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'd', entity_0-1);
  entity_3[entity_0-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  strcpy(entity_7, entity_3);
}