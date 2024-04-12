void fun()
{
  char* entity_8;
  char* entity_9;
  char entity_2 = 'C';
  char entity_7[54] = "";
  entity_7 = NULL;
  char entity_0[17] = "";
  entity_0 = NULL;
  memset(entity_7, 'f', 54-1);
  entity_7[54-1]='';
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[85-1]='';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  memset(entity_0, 'Y', 17-1);
  entity_0[17-1]='';
  strcpy(entity_9, entity_7);
}