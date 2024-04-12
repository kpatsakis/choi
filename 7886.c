void fun()
{
  int entity_5 = 98;
  char entity_6[86] = "";
  entity_6 = NULL;
  char entity_1[52] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 't', 52-1);
  entity_1[52-1]='';
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  memset(entity_6, 'D', 86-1);
  entity_6[86-1]='';
  entity_6[entity_5] = 'O';
}