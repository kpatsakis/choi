void fun()
{
  int entity_5 = 30;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_0[75] = "";
  entity_0 = NULL;
  char entity_6[10] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_0, 'Q', 75-1);
  entity_0[75-1]='';
  memset(entity_6, 'C', 10-1);
  entity_6[10-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  memset(entity_3, 'O', entity_5-1);
  entity_3[entity_5-1]='';
  entity_5 = 36;
  memcpy(entity_1, entity_3, entity_5*sizeof(char));
}