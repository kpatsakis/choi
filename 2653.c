void fun()
{
  int entity_8 = 3;
  char entity_0[35] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_7[78] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', 78-1);
  entity_7[78-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  memset(entity_0, 'P', 35-1);
  entity_0[35-1]='';
  memcpy(entity_2, entity_0, 35*sizeof(char));
}