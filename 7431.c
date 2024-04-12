void fun()
{
  int entity_6 = 93;
  int entity_1 = 70;
  entity_6 = 37;
  char entity_3[61] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_2 = 'l';
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_3, 'v', 61-1);
  entity_3[61-1]='';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_4, 'i', entity_6-1);
  entity_4[entity_6-1]='';
  memcpy(entity_5, entity_4, entity_6*sizeof(char));
}