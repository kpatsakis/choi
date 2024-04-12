void fun()
{
  int entity_4 = 31;
  entity_4 = 63;
  char entity_8[67] = "";
  entity_8 = NULL;
  char entity_7 = 'I';
  char entity_0[22] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_8, 'Z', 67-1);
  entity_8[67-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_0, 'c', 22-1);
  entity_0[22-1]='';
  strcpy(entity_2, entity_8);
}