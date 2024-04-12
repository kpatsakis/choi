void fun()
{
  int entity_2 = 8;
  char entity_3[69] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_1[77] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_3, 'r', 69-1);
  entity_3[69-1]='';
  memset(entity_1, 'v', 77-1);
  entity_1[77-1]='';
  strcpy(entity_0, entity_3);
}