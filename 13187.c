void fun()
{
  int entity_5 = 59;
  entity_5 = 70;
  char* entity_9;
  char* entity_6;
  char entity_2[entity_5] = "";
  char* entity_1;
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[0]='0';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'L', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_9, entity_2, entity_5*sizeof(char));
}