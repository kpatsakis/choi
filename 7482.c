void fun()
{
  int entity_6 = 56;
  char* entity_3;
  char entity_8[50] = "";
  entity_8 = NULL;
  char entity_2[15] = "";
  entity_2 = NULL;
  memset(entity_2, 's', 15-1);
  entity_2[15-1]='';
  memset(entity_8, 't', 50-1);
  entity_8[50-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 41;
  memcpy(entity_3, entity_2, 15*sizeof(char));
}