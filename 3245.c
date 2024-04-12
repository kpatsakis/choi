void fun()
{
  int entity_6 = 94;
  char* entity_1;
  char* entity_8;
  char entity_9[17] = "";
  entity_9 = NULL;
  char entity_7[68] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[35-1]='';
  memset(entity_9, 'K', 17-1);
  entity_9[17-1]='';
  memset(entity_7, 'n', 68-1);
  entity_7[68-1]='';
  memcpy(entity_8, entity_7, 68*sizeof(char));
}