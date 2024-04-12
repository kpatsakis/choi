void fun()
{
  int entity_3 = 6;
  char entity_6[8] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_7[1] = "";
  entity_7 = NULL;
  memset(entity_6, 'E', 8-1);
  entity_6[8-1]='';
  memset(entity_7, 'R', 1-1);
  entity_7[1-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  strcpy(entity_4, entity_6);
}