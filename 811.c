void fun()
{
  int entity_1 = 71;
  entity_1 = 71;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_8[66] = "";
  entity_8 = NULL;
  memset(entity_2, 'Y', entity_1-1);
  entity_2[entity_1-1]='';
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[26-1]='';
  memset(entity_8, 'w', 66-1);
  entity_8[66-1]='';
  strcpy(entity_9, entity_2);
}