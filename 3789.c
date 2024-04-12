void fun()
{
  int entity_0 = 15;
  char* entity_1;
  char entity_7[46] = "";
  entity_7 = NULL;
  char entity_6[32] = "";
  entity_6 = NULL;
  memset(entity_7, 'p', 46-1);
  entity_7[46-1]='';
  memset(entity_6, 'a', 32-1);
  entity_6[32-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  entity_0 = 98;
  strcpy(entity_1, entity_6);
}