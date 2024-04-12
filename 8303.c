void fun()
{
  char entity_1[41] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_8;
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[65-1]='';
  memset(entity_1, 'p', 41-1);
  entity_1[41-1]='';
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[18-1]='';
  memcpy(entity_8, entity_1, 41*sizeof(char));
}