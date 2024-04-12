void fun()
{
  int entity_1 = 100;
  char entity_4[1] = "";
  entity_4 = NULL;
  char entity_6[3] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_4, 'L', 1-1);
  entity_4[1-1]='';
  memset(entity_6, 'n', 3-1);
  entity_6[3-1]='';
  entity_1 = 57;
  memcpy(entity_3, entity_4, 1*sizeof(char));
}