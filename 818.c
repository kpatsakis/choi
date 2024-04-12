void fun()
{
  int entity_8 = 64;
  char entity_6[66] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_1[61] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_1, 'w', 61-1);
  entity_1[61-1]='';
  memset(entity_6, 'W', 66-1);
  entity_6[66-1]='';
  strcpy(entity_9, entity_6);
}