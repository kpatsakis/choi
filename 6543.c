void fun()
{
  int entity_3 = 83;
  char entity_8[1] = "";
  entity_8 = NULL;
  char entity_2[6] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_8, 'd', 1-1);
  entity_8[1-1]='';
  memset(entity_2, 'd', 6-1);
  entity_2[6-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  entity_3 = 12;
  memcpy(entity_1, entity_2, 6*sizeof(char));
}