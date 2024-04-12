void fun()
{
  int entity_7 = 59;
  entity_7 = 8;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_0[43] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'l', 43-1);
  entity_0[43-1]='';
  entity_3 = (char*)malloc(81*sizeof(char));
  entity_3[81-1]='';
  memset(entity_2, 'i', entity_7-1);
  entity_2[entity_7-1]='';
  memcpy(entity_3, entity_2, entity_7*sizeof(char));
}