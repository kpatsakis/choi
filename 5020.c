void fun()
{
  int entity_3 = 37;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_1;
  char* entity_4;
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  memset(entity_5, 'Y', entity_3-1);
  entity_5[entity_3-1]='';
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[38-1]='';
  entity_3 = 65;
  memcpy(entity_1, entity_5, entity_3*sizeof(char));
}