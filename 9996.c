void fun()
{
  int entity_7 = 37;
  char* entity_3;
  char entity_1[86] = "";
  entity_1 = NULL;
  char* entity_2;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_0[21] = "";
  entity_0 = NULL;
  memset(entity_5, 'r', entity_7-1);
  entity_5[entity_7-1]='';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[54-1]='';
  memset(entity_1, 'k', 86-1);
  entity_1[86-1]='';
  memset(entity_0, 'x', 21-1);
  entity_0[21-1]='';
  entity_3 = (char*)malloc(0*sizeof(char));
  entity_3[0-1]='';
  memcpy(entity_2, entity_5, entity_7*sizeof(char));
}