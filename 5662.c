void fun()
{
  int entity_9 = 46;
  int entity_1 = 91;
  char entity_2[53] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_0[84] = "";
  entity_0 = NULL;
  char entity_4 = 'j';
  memset(entity_2, 'W', 53-1);
  entity_2[53-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memset(entity_0, 'X', 84-1);
  entity_0[84-1]='';
  strcpy(entity_6, entity_0);
}