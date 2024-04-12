void fun()
{
  int entity_1 = 46;
  char* entity_2;
  char entity_7[19] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[24-1]='';
  memset(entity_7, 'O', 19-1);
  entity_7[19-1]='';
  entity_1 = 9;
  memcpy(entity_9, entity_7, 19*sizeof(char));
}