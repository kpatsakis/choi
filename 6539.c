void fun()
{
  int entity_6 = 65;
  entity_6 = 62;
  char* entity_7;
  char entity_0[23] = "";
  entity_0 = NULL;
  char entity_1[75] = "";
  entity_1 = NULL;
  memset(entity_0, 'o', 23-1);
  entity_0[23-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_1, 'v', 75-1);
  entity_1[75-1]='';
  memcpy(entity_7, entity_0, 23*sizeof(char));
}