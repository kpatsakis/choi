void fun()
{
  int entity_1 = 97;
  entity_1 = 95;
  char entity_6[10] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_8;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[45-1]='';
  memset(entity_6, 'J', 10-1);
  entity_6[10-1]='';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  entity_9 = (char*)malloc(17*sizeof(char));
  entity_9[17-1]='';
  memset(entity_5, 'L', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_2, entity_5, entity_1*sizeof(char));
}