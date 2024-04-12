void fun()
{
  int entity_1 = 20;
  char entity_2[39] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_6[71] = "";
  entity_6 = NULL;
  memset(entity_2, 'I', 39-1);
  entity_2[39-1]='';
  memset(entity_6, 'T', 71-1);
  entity_6[71-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memcpy(entity_3, entity_6, 71*sizeof(char));
}