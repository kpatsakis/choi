void fun()
{
  int entity_6 = 29;
  int entity_1 = 23;
  char* entity_7;
  char entity_3[97] = "";
  entity_3 = NULL;
  char entity_5 = 'S';
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'u', entity_6-1);
  entity_4[entity_6-1]='';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  memset(entity_3, 'A', 97-1);
  entity_3[97-1]='';
  entity_6 = 75;
  memcpy(entity_7, entity_4, entity_6*sizeof(char));
}