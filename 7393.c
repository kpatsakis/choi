void fun()
{
  int entity_3 = 13;
  char entity_6[47] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_1[18] = "";
  entity_1 = NULL;
  memset(entity_6, 'm', 47-1);
  entity_6[47-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_1, 'N', 18-1);
  entity_1[18-1]='';
  strcpy(entity_7, entity_6);
}