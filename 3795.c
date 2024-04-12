void fun()
{
  int entity_9 = 68;
  char* entity_6;
  char entity_0[84] = "";
  entity_0 = NULL;
  char entity_4 = 'a';
  char* entity_5;
  memset(entity_0, 'E', 84-1);
  entity_0[84-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[63-1]='';
  entity_9 = 47;
  strcpy(entity_6, entity_0);
}