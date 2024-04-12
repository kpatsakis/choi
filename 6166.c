void fun()
{
  int entity_9 = 65;
  int entity_8 = 99;
  char* entity_3;
  char entity_6[1] = "";
  entity_6 = NULL;
  char entity_0[42] = "";
  entity_0 = NULL;
  char entity_2[82] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_2, 'H', 82-1);
  entity_2[82-1]='';
  memset(entity_0, 'v', 42-1);
  entity_0[42-1]='';
  memset(entity_6, 'Y', 1-1);
  entity_6[1-1]='';
  strcpy(entity_3, entity_6);
}