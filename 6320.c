void fun()
{
  char entity_6[72] = "";
  entity_6 = NULL;
  char entity_8[41] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_9;
  memset(entity_8, 's', 41-1);
  entity_8[41-1]='';
  memset(entity_6, 'e', 72-1);
  entity_6[72-1]='';
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  entity_4 = (char*)malloc(21*sizeof(char));
  entity_4[21-1]='';
  memcpy(entity_9, entity_8, 41*sizeof(char));
}