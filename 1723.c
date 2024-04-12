void fun()
{
  int entity_4 = 88;
  entity_4 = 83;
  char* entity_3;
  char entity_0[69] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  entity_5 = (char*)malloc(40*sizeof(char));
  entity_5[40-1]='';
  memset(entity_0, 'z', 69-1);
  entity_0[69-1]='';
  strcpy(entity_3, entity_0);
}