void fun()
{
  int entity_2 = 3;
  char* entity_7;
  char* entity_6;
  char entity_1[64] = "";
  entity_1 = NULL;
  char entity_5[67] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[75-1]='';
  memset(entity_1, 'P', 64-1);
  entity_1[64-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_5, 'Q', 67-1);
  entity_5[67-1]='';
  strcpy(entity_7, entity_5);
}