void fun()
{
  int entity_0 = 13;
  int entity_1 = 3;
  char entity_5[87] = "";
  entity_5 = NULL;
  char* entity_3;
  char entity_4[38] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_5, 'n', 87-1);
  entity_5[87-1]='';
  memset(entity_4, 'H', 38-1);
  entity_4[38-1]='';
  entity_1 = 91;
  memcpy(entity_3, entity_5, 87*sizeof(char));
}