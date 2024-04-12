void fun()
{
  int entity_1 = 74;
  char* entity_0;
  char* entity_8;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_5[31] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  memset(entity_5, 'l', 31-1);
  entity_5[31-1]='';
  memset(entity_9, 'J', entity_1-1);
  entity_9[entity_1-1]='';
  entity_0 = (char*)malloc(41*sizeof(char));
  entity_0[41-1]='';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memcpy(entity_8, entity_9, entity_1*sizeof(char));
}