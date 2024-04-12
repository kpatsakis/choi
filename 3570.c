void fun()
{
  int entity_7 = 10;
  int entity_1 = 44;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_5[71] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_2, 'H', entity_7-1);
  entity_2[entity_7-1]='';
  memset(entity_5, 'D', 71-1);
  entity_5[71-1]='';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  entity_2[64] = 'Y';
}