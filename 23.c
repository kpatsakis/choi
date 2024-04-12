void fun()
{
  int entity_8 = 50;
  entity_8 = 40;
  char entity_3[39] = "";
  entity_3 = NULL;
  char* entity_2;
  char* entity_5;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[96-1]='';
  memset(entity_3, 'G', 39-1);
  entity_3[39-1]='';
  memset(entity_9, 'B', entity_8-1);
  entity_9[entity_8-1]='';
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  memcpy(entity_2, entity_9, entity_8*sizeof(char));
}