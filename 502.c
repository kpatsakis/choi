void fun()
{
  int entity_2 = 63;
  char* entity_4;
  char entity_1[21] = "";
  entity_1 = NULL;
  char entity_7[34] = "";
  entity_7 = NULL;
  char entity_5[7] = "";
  entity_5 = NULL;
  memset(entity_5, 'J', 7-1);
  entity_5[7-1]='';
  memset(entity_7, 'j', 34-1);
  entity_7[34-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_1, 'U', 21-1);
  entity_1[21-1]='';
  entity_2 = 45;
  memcpy(entity_4, entity_7, 34*sizeof(char));
}