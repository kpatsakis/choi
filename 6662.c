void fun()
{
  int entity_2 = 35;
  char entity_0[84] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_3[2] = "";
  entity_3 = NULL;
  char entity_9 = 'P';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_3, 'h', 2-1);
  entity_3[2-1]='';
  memset(entity_0, 'u', 84-1);
  entity_0[84-1]='';
  strcpy(entity_4, entity_3);
}