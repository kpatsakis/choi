void fun()
{
  int entity_6 = 71;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_3 = 'S';
  char* entity_7;
  char* entity_1;
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[15-1]='';
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[32-1]='';
  memset(entity_4, 'D', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 99;
  memcpy(entity_1, entity_4, entity_6*sizeof(char));
}