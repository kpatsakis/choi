void fun()
{
  int entity_1 = 59;
  char entity_9[91] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_8[85] = "";
  entity_8 = NULL;
  char* entity_7;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_9, 'b', 91-1);
  entity_9[91-1]='';
  memset(entity_2, 'u', entity_1-1);
  entity_2[entity_1-1]='';
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[12-1]='';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[58-1]='';
  memset(entity_8, 'U', 85-1);
  entity_8[85-1]='';
  memcpy(entity_7, entity_2, entity_1*sizeof(char));
}