void fun()
{
  int entity_0 = 97;
  char* entity_6;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char entity_3[23] = "";
  entity_3 = NULL;
  char entity_8[69] = "";
  entity_8 = NULL;
  memset(entity_3, 'j', 23-1);
  entity_3[23-1]='';
  memset(entity_4, 'e', entity_0-1);
  entity_4[entity_0-1]='';
  memset(entity_8, 'Q', 69-1);
  entity_8[69-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  strcpy(entity_6, entity_4);
}