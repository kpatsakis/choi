void fun()
{
  int entity_9 = 32;
  char entity_4[14] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_5[59] = "";
  entity_5 = NULL;
  char* entity_6;
  char* entity_1;
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[57-1]='';
  memset(entity_5, 'a', 59-1);
  entity_5[59-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_4, 'q', 14-1);
  entity_4[14-1]='';
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[84-1]='';
  entity_9 = 95;
  memcpy(entity_7, entity_5, 59*sizeof(char));
}