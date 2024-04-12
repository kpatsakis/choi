void fun()
{
  int entity_5 = 55;
  int entity_7 = 83;
  char entity_1[4] = "";
  entity_1 = NULL;
  char* entity_2;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[12-1]='';
  memset(entity_6, 'S', entity_7-1);
  entity_6[entity_7-1]='';
  memset(entity_1, 'A', 4-1);
  entity_1[4-1]='';
  memcpy(entity_2, entity_6, entity_7*sizeof(char));
}