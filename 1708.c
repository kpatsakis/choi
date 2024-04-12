void fun()
{
  int entity_1 = 37;
  char* entity_5;
  char* entity_4;
  char* entity_9;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', entity_1-1);
  entity_7[entity_1-1]='';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  entity_4 = (char*)malloc(41*sizeof(char));
  entity_4[41-1]='';
  memcpy(entity_5, entity_7, entity_1*sizeof(char));
}