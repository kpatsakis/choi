void fun()
{
  int entity_0 = 33;
  int entity_1 = 57;
  entity_1 = 57;
  char entity_9 = 'a';
  char entity_4[94] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_4, 'A', 94-1);
  entity_4[94-1]='';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  memset(entity_3, 'z', entity_1-1);
  entity_3[entity_1-1]='';
  strcpy(entity_8, entity_3);
}