void fun()
{
  int entity_7 = 97;
  char entity_4[68] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_1 = 'x';
  char entity_0[88] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_0, 'q', 88-1);
  entity_0[88-1]='';
  memset(entity_4, 'P', 68-1);
  entity_4[68-1]='';
  entity_7 = 18;
  strcpy(entity_3, entity_4);
}