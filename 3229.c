void fun()
{
  int entity_9 = 40;
  int entity_0 = 42;
  int entity_4 = 65;
  char entity_2[59] = "";
  entity_2 = NULL;
  char entity_6[83] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_6, 'z', 83-1);
  entity_6[83-1]='';
  memset(entity_2, 'y', 59-1);
  entity_2[59-1]='';
  strcpy(entity_1, entity_2);
}