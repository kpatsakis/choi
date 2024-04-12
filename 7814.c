void fun()
{
  int entity_4 = 91;
  char entity_0[66] = "";
  entity_0 = NULL;
  char entity_2[79] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_9[15] = "";
  entity_9 = NULL;
  memset(entity_0, 'r', 66-1);
  entity_0[66-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_9, 'T', 15-1);
  entity_9[15-1]='';
  memset(entity_2, 'J', 79-1);
  entity_2[79-1]='';
  strcpy(entity_3, entity_0);
}