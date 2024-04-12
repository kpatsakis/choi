void fun()
{
  int entity_1 = 40;
  char entity_6 = 'U';
  char entity_2[24] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_7[83] = "";
  entity_7 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_2, 's', 24-1);
  entity_2[24-1]='';
  memset(entity_0, 'P', entity_1-1);
  entity_0[entity_1-1]='';
  memset(entity_7, 'f', 83-1);
  entity_7[83-1]='';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  memcpy(entity_3, entity_0, entity_1*sizeof(char));
}