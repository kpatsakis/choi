void fun()
{
  int entity_6 = 22;
  entity_6 = 57;
  char entity_7[41] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_0;
  char entity_2[35] = "";
  entity_2 = NULL;
  memset(entity_7, 'a', 41-1);
  entity_7[41-1]='';
  memset(entity_2, 'G', 35-1);
  entity_2[35-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  memcpy(entity_0, entity_2, 35*sizeof(char));
}