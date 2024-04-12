void fun()
{
  int entity_5 = 90;
  entity_5 = 90;
  char entity_8[34] = "";
  entity_8 = NULL;
  char* entity_4;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  memset(entity_8, 'A', 34-1);
  entity_8[34-1]='';
  memset(entity_6, 'L', entity_5-1);
  entity_6[entity_5-1]='';
  strcpy(entity_4, entity_6);
}