void fun()
{
  int entity_9 = 32;
  int entity_3 = 53;
  char* entity_1;
  char entity_4[84] = "";
  entity_4 = NULL;
  char entity_6 = 'N';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_4, 'j', 84-1);
  entity_4[84-1]='';
  entity_3 = 77;
  strcpy(entity_1, entity_4);
}