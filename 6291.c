void fun()
{
  int entity_4 = 11;
  char entity_1[66] = "";
  entity_1 = NULL;
  char entity_3 = 'X';
  char* entity_6;
  memset(entity_1, 'P', 66-1);
  entity_1[66-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  strcpy(entity_6, entity_1);
}