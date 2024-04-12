void fun()
{
  int entity_9 = 2;
  char* entity_7;
  char entity_3[19] = "";
  entity_3 = NULL;
  char entity_2[94] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[64-1]='';
  memset(entity_2, 'J', 94-1);
  entity_2[94-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_3, 'a', 19-1);
  entity_3[19-1]='';
  memcpy(entity_7, entity_3, 19*sizeof(char));
}