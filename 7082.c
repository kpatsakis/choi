void fun()
{
  int entity_7 = 36;
  char* entity_3;
  char entity_1[63] = "";
  entity_1 = NULL;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(94*sizeof(char));
  entity_3[94-1]='';
  memset(entity_1, 'T', 63-1);
  entity_1[63-1]='';
  memset(entity_6, 'f', entity_7-1);
  entity_6[entity_7-1]='';
  entity_7 = 68;
  strcpy(entity_3, entity_6);
}