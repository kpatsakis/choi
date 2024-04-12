void fun()
{
  int entity_1 = 63;
  char entity_5[97] = "";
  entity_5 = NULL;
  char entity_6[66] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_5, 'T', 97-1);
  entity_5[97-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_6, 'u', 66-1);
  entity_6[66-1]='';
  strcpy(entity_7, entity_5);
}