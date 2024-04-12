void fun()
{
  int entity_6 = 69;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_2[37] = "";
  entity_2 = NULL;
  memset(entity_0, 't', entity_6-1);
  entity_0[entity_6-1]='';
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  memset(entity_2, 'h', 37-1);
  entity_2[37-1]='';
  entity_6 = 66;
  strcpy(entity_3, entity_0);
}