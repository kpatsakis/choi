void fun()
{
  int entity_5 = 9;
  char* entity_1;
  char* entity_8;
  char* entity_7;
  char entity_9[entity_5] = "";
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'R', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[0]='0';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_8, entity_9, entity_5*sizeof(char));
}