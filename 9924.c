void fun()
{
  int entity_7 = 19;
  char entity_3[29] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[56-1]='';
  memset(entity_3, 'Q', 29-1);
  entity_3[29-1]='';
  memset(entity_4, 'g', entity_7-1);
  entity_4[entity_7-1]='';
  memcpy(entity_6, entity_4, entity_7*sizeof(char));
}