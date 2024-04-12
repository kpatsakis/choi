void fun()
{
  int entity_7 = 16;
  int entity_4 = 7;
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_9[22] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_3, 'M', 29-1);
  entity_3[29-1]='';
  memset(entity_9, 'U', 22-1);
  entity_9[22-1]='';
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[31-1]='';
  entity_9[entity_4] = 'I';
}