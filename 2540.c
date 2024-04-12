void fun()
{
  int entity_1 = 88;
  char entity_7[9] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_4;
  entity_9 = (char*)malloc(44*sizeof(char));
  entity_9[44-1]='';
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[74-1]='';
  memset(entity_7, 'c', 9-1);
  entity_7[9-1]='';
  memcpy(entity_9, entity_7, 9*sizeof(char));
}