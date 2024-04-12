void fun()
{
  int entity_6 = 26;
  char entity_0 = 'u';
  char* entity_2;
  char entity_3[54] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  memset(entity_3, 'E', 54-1);
  entity_3[54-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_6 = 95;
  memcpy(entity_2, entity_3, 54*sizeof(char));
}