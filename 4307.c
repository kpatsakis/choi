void fun()
{
  int entity_1 = 52;
  entity_1 = 23;
  char entity_9 = 'y';
  char entity_3[12] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_8[29] = "";
  entity_8 = NULL;
  char entity_7 = 'n';
  memset(entity_3, 'y', 12-1);
  entity_3[12-1]='';
  memset(entity_8, 'F', 29-1);
  entity_8[29-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memcpy(entity_5, entity_3, 12*sizeof(char));
}