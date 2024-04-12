void fun()
{
  int entity_3 = 91;
  entity_3 = 91;
  char* entity_4;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[17-1]='';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  memset(entity_0, 'Z', entity_3-1);
  entity_0[entity_3-1]='';
  strcpy(entity_6, entity_0);
}