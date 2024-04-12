void fun()
{
  int entity_7 = 15;
  int entity_5 = 50;
  int entity_6 = 48;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_9;
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[63-1]='';
  memset(entity_8, 'W', entity_7-1);
  entity_8[entity_7-1]='';
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[1-1]='';
  entity_7 = 75;
  memcpy(entity_4, entity_8, entity_7*sizeof(char));
}