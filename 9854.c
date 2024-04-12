void fun()
{
  int entity_9 = 41;
  char entity_5 = 'i';
  char entity_4[66] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'U', 66-1);
  entity_4[66-1]='';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  entity_4[entity_9] = 's';
}