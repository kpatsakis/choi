void fun()
{
  int entity_6 = 92;
  char entity_1[1] = "";
  entity_1 = NULL;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_1, 'T', 1-1);
  entity_1[1-1]='';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[37-1]='';
  memset(entity_2, 'X', entity_6-1);
  entity_2[entity_6-1]='';
  entity_6 = 84;
  memcpy(entity_3, entity_2, entity_6*sizeof(char));
}