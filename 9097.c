void fun()
{
  int entity_9 = 75;
  char entity_2 = 'j';
  char* entity_8;
  char entity_6[23] = "";
  entity_6 = NULL;
  char entity_5[85] = "";
  entity_5 = NULL;
  memset(entity_5, 'X', 85-1);
  entity_5[85-1]='';
  memset(entity_6, 's', 23-1);
  entity_6[23-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memcpy(entity_8, entity_6, 23*sizeof(char));
}