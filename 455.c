void fun()
{
  int entity_4 = 66;
  char* entity_1;
  char* entity_5;
  char* entity_8;
  char entity_0[7] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[11-1]='';
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[75-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_0, 'Q', 7-1);
  entity_0[7-1]='';
  strcpy(entity_5, entity_0);
}