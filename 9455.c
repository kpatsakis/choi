void fun()
{
  int entity_4 = 24;
  int entity_6 = 53;
  entity_6 = 5;
  char* entity_7;
  char entity_8[90] = "";
  entity_8 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  memset(entity_1, 'N', entity_6-1);
  entity_1[entity_6-1]='';
  memset(entity_8, 's', 90-1);
  entity_8[90-1]='';
  memcpy(entity_7, entity_1, entity_6*sizeof(char));
}