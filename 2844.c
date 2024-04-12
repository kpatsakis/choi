void fun()
{
  int entity_4 = 80;
  char entity_3[97] = "";
  entity_3 = NULL;
  char* entity_5;
  char* entity_6;
  char entity_2[9] = "";
  entity_2 = NULL;
  memset(entity_3, 'Z', 97-1);
  entity_3[97-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[89-1]='';
  memset(entity_2, 'L', 9-1);
  entity_2[9-1]='';
  memcpy(entity_5, entity_2, 9*sizeof(char));
}