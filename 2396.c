void fun()
{
  char* entity_9;
  char entity_8[59] = "";
  entity_8 = NULL;
  char entity_3[40] = "";
  entity_3 = NULL;
  memset(entity_8, 'w', 59-1);
  entity_8[59-1]='';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  memset(entity_3, 'X', 40-1);
  entity_3[40-1]='';
  memcpy(entity_9, entity_3, 40*sizeof(char));
}