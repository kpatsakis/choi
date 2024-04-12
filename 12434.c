void fun()
{
  int entity_9 = 61;
  char entity_2[18] = "";
  char* entity_5;
  char* entity_6;
  char* entity_1;
  char* entity_4;
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'U', 18-1);
  entity_2[18-1]='0';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[0]='0';
  entity_6 = (char*)malloc(0*sizeof(char));
  entity_6[0]='0';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 18*sizeof(char));
}