void fun()
{
  char entity_8[61] = "";
  entity_8 = NULL;
  char* entity_1;
  char* entity_6;
  char* entity_5;
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[17-1]='';
  memset(entity_8, 'U', 61-1);
  entity_8[61-1]='';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[94-1]='';
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[7-1]='';
  memcpy(entity_6, entity_8, 61*sizeof(char));
}