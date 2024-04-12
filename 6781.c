void fun()
{
  int entity_6 = 19;
  int entity_1 = 33;
  char* entity_5;
  char entity_3[97] = "";
  entity_3 = NULL;
  char entity_7[23] = "";
  entity_7 = NULL;
  char entity_4 = 'K';
  memset(entity_7, 'R', 23-1);
  entity_7[23-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_3, 'b', 97-1);
  entity_3[97-1]='';
  memcpy(entity_5, entity_3, 97*sizeof(char));
}