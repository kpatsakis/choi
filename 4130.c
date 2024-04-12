void fun()
{
  int entity_2 = 74;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_1;
  char* entity_5;
  char entity_0[5] = "";
  entity_0 = NULL;
  memset(entity_7, 'I', entity_2-1);
  entity_7[entity_2-1]='';
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[10-1]='';
  memset(entity_0, 'V', 5-1);
  entity_0[5-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  entity_2 = 93;
  memcpy(entity_5, entity_7, entity_2*sizeof(char));
}