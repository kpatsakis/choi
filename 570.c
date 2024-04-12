void fun()
{
  int entity_5 = 85;
  char* entity_6;
  char entity_7[24] = "";
  entity_7 = NULL;
  char entity_4[88] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_7, 'o', 24-1);
  entity_7[24-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  memset(entity_4, 'Z', 88-1);
  entity_4[88-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memcpy(entity_0, entity_7, 24*sizeof(char));
}