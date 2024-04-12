void fun()
{
  int entity_1 = 52;
  entity_1 = 15;
  char entity_7[43] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_4;
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[23-1]='';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[97-1]='';
  memset(entity_7, 'm', 43-1);
  entity_7[43-1]='';
  memcpy(entity_8, entity_7, 43*sizeof(char));
}