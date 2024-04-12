void fun()
{
  int entity_8 = 39;
  char* entity_5;
  char entity_7[59] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_4;
  memset(entity_7, 's', 59-1);
  entity_7[59-1]='';
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  entity_8 = 3;
  strcpy(entity_5, entity_7);
}