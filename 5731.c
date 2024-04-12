void fun()
{
  int entity_2 = 43;
  char entity_5[99] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_3[45] = "";
  entity_3 = NULL;
  char entity_4[21] = "";
  entity_4 = NULL;
  memset(entity_3, 'N', 45-1);
  entity_3[45-1]='';
  memset(entity_5, 'X', 99-1);
  entity_5[99-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_4, 'I', 21-1);
  entity_4[21-1]='';
  memcpy(entity_1, entity_3, 45*sizeof(char));
}