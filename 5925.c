void fun()
{
  int entity_2 = 48;
  char* entity_9;
  char* entity_1;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  memset(entity_3, 'D', entity_2-1);
  entity_3[entity_2-1]='';
  memcpy(entity_7, entity_3, entity_2*sizeof(char));
}