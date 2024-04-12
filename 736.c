void fun()
{
  int entity_0 = 51;
  char* entity_3;
  char entity_2[81] = "";
  entity_2 = NULL;
  char entity_9 = 'u';
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memset(entity_2, 'W', 81-1);
  entity_2[81-1]='';
  entity_0 = 93;
  memcpy(entity_7, entity_2, 81*sizeof(char));
}