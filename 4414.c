void fun()
{
  int entity_6 = 51;
  char entity_1 = 'p';
  char* entity_9;
  char entity_7[26] = "";
  entity_7 = NULL;
  char entity_3[51] = "";
  entity_3 = NULL;
  memset(entity_3, 'v', 51-1);
  entity_3[51-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_7, 'X', 26-1);
  entity_7[26-1]='';
  memcpy(entity_9, entity_3, 51*sizeof(char));
}