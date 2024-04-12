void fun()
{
  int entity_1 = 97;
  char entity_5[2] = "";
  entity_5 = NULL;
  char* entity_7;
  char* entity_9;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[88-1]='';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  memset(entity_6, 'r', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_5, 'z', 2-1);
  entity_5[2-1]='';
  memcpy(entity_7, entity_6, entity_1*sizeof(char));
}