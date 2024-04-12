void fun()
{
  int entity_0 = 34;
  char* entity_8;
  char entity_6[22] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_6, 'v', 22-1);
  entity_6[22-1]='';
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[69-1]='';
  strcpy(entity_8, entity_6);
}