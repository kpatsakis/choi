void fun()
{
  int entity_9 = 86;
  char* entity_4;
  char entity_3[66] = "";
  entity_3 = NULL;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  memset(entity_3, 'A', 66-1);
  entity_3[66-1]='';
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[86-1]='';
  memset(entity_7, 'D', entity_9-1);
  entity_7[entity_9-1]='';
  entity_9 = 17;
  strcpy(entity_4, entity_7);
}