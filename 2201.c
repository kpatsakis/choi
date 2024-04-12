void fun()
{
  int entity_7 = 95;
  char* entity_5;
  char entity_9[27] = "";
  entity_9 = NULL;
  char* entity_8;
  char* entity_1;
  char entity_3[22] = "";
  entity_3 = NULL;
  memset(entity_9, 'E', 27-1);
  entity_9[27-1]='';
  memset(entity_3, 'G', 22-1);
  entity_3[22-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[66-1]='';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  entity_7 = 37;
  memcpy(entity_5, entity_3, 22*sizeof(char));
}