void fun()
{
  int entity_6 = 63;
  entity_6 = 63;
  char entity_7[24] = "";
  entity_7 = NULL;
  char entity_0[9] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_9 = 'I';
  memset(entity_0, 'G', 9-1);
  entity_0[9-1]='';
  memset(entity_7, 'X', 24-1);
  entity_7[24-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memcpy(entity_2, entity_0, 9*sizeof(char));
}