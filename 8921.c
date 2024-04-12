void fun()
{
  int entity_6 = 58;
  int entity_4 = 60;
  int entity_1 = 52;
  char entity_9[19] = "";
  entity_9 = NULL;
  char* entity_5;
  char* entity_2;
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_9, 'O', 19-1);
  entity_9[19-1]='';
  entity_6 = 27;
  memcpy(entity_5, entity_9, 19*sizeof(char));
}