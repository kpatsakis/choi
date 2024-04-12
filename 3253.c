void fun()
{
  int entity_3 = 68;
  int entity_4 = 10;
  int entity_9 = 26;
  char* entity_7;
  char entity_5[51] = "";
  entity_5 = NULL;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(74*sizeof(char));
  entity_7[74-1]='';
  memset(entity_5, 'Z', 51-1);
  entity_5[51-1]='';
  memset(entity_1, 'W', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 50;
  memcpy(entity_7, entity_1, entity_3*sizeof(char));
}